#pragma once

#include "REX/BASE.h"

#include "REL/ASM.h"
#include "REL/Offset.h"
#include "REL/Trampoline.h"
#include "REL/Utility.h"

#include "REX/CAST.h"
#include "REX/FModule.h"

namespace REL
{
	template <class>
	class Relocation;

	inline constexpr std::uint8_t NOP = 0x90;
	inline constexpr std::uint8_t RET = 0xC3;
	inline constexpr std::uint8_t INT3 = 0xCC;

	// member function pointers are thiscall on x86, std::invoke calls them correctly
	template <class F, class... Args>
	std::invoke_result_t<F, Args...> invoke(F&& a_func, Args&&... a_args)  //
		noexcept(std::is_nothrow_invocable_v<F, Args...>)                  //
		requires(std::invocable<F, Args...>)
	{
		return std::invoke(std::forward<F>(a_func), std::forward<Args>(a_args)...);
	}

	template <class T = std::uintptr_t>
	class Relocation
	{
	public:
		using value_type =
			std::conditional_t<
				std::is_member_pointer_v<T> || std::is_function_v<std::remove_pointer_t<T>>,
				std::decay_t<T>,
				T>;

		constexpr Relocation() noexcept = default;

		explicit constexpr Relocation(std::uintptr_t a_address) noexcept :
			_impl{ a_address }
		{}

		explicit Relocation(Offset a_offset) :
			_impl{ a_offset.address() }
		{}

		constexpr Relocation& operator=(std::uintptr_t a_address) noexcept
		{
			_impl = a_address;
			return *this;
		}

		Relocation& operator=(Offset a_offset)
		{
			_impl = a_offset.address();
			return *this;
		}

		template <class U = value_type>
		[[nodiscard]] decltype(auto) operator*() const noexcept
			requires(std::is_pointer_v<U>)
		{
			return *get();
		}

		template <class U = value_type>
		[[nodiscard]] auto operator->() const noexcept
			requires(std::is_pointer_v<U>)
		{
			return get();
		}

		[[nodiscard]] operator bool() const noexcept
		{
			return _impl != 0;
		}

		template <class... Args>
		std::invoke_result_t<const value_type&, Args...> operator()(Args&&... a_args) const
			noexcept(std::is_nothrow_invocable_v<const value_type&, Args...>)
			requires(std::invocable<const value_type&, Args...>)
		{
			return REL::invoke(get(), std::forward<Args>(a_args)...);
		}

		[[nodiscard]] constexpr std::uintptr_t address() const noexcept { return _impl; }
		[[nodiscard]] std::size_t              offset() const { return _impl - base(); }

		[[nodiscard]] value_type get() const
			noexcept(std::is_nothrow_copy_constructible_v<value_type>)
		{
			assert(_impl != 0);
			return REX::UNRESTRICTED_CAST<value_type>(_impl);
		}

		template <std::ptrdiff_t O = 0>
		void replace_func(const std::size_t a_count, const std::uintptr_t a_dst)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			ASM::JMP5 assembly(address() + O, a_dst);  // rel32 reaches every address on x86

			write_fill<O>(INT3, a_count);
			write<O>(&assembly, sizeof(assembly));
		}

		template <std::ptrdiff_t O = 0, class F>
		void replace_func(const std::size_t a_count, const F a_dst)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			replace_func<O>(a_count, REX::UNRESTRICTED_CAST<std::uintptr_t>(a_dst));
		}

		template <std::ptrdiff_t O = 0>
		void write(const void* a_src, std::size_t a_count)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			WriteSafe(address() + O, a_src, a_count);
		}

		template <std::ptrdiff_t O = 0, std::integral U>
		void write(const U& a_data)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			WriteSafe(address() + O, std::addressof(a_data), sizeof(U));
		}

		template <std::ptrdiff_t O = 0>
		void write(const std::initializer_list<std::uint8_t> a_data)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			WriteSafe(address() + O, a_data.begin(), a_data.size());
		}

		template <std::ptrdiff_t O = 0, class U>
		void write(const std::span<U> a_data)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			WriteSafe(address() + O, a_data.data(), a_data.size_bytes());
		}

		template <std::size_t N, std::ptrdiff_t O = 0>
		std::uintptr_t write_jmp(const std::uintptr_t a_dst)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			return GetTrampoline().write_jmp<N>(address() + O, a_dst);
		}

		template <std::size_t N, std::ptrdiff_t O = 0, class F>
		std::uintptr_t write_jmp(const F a_dst)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			return GetTrampoline().write_jmp<N>(address() + O, REX::UNRESTRICTED_CAST<std::uintptr_t>(a_dst));
		}

		template <std::size_t N, std::ptrdiff_t O = 0>
		std::uintptr_t write_call(const std::uintptr_t a_dst)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			return GetTrampoline().write_call<N>(address() + O, a_dst);
		}

		template <std::size_t N, std::ptrdiff_t O = 0, class F>
		std::uintptr_t write_call(const F a_dst)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			return GetTrampoline().write_call<N>(address() + O, REX::UNRESTRICTED_CAST<std::uintptr_t>(a_dst));
		}

		template <std::ptrdiff_t O = 0>
		void write_fill(const std::uint8_t a_value, const std::size_t a_count)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			WriteSafeFill(address() + O, a_value, a_count);
		}

		template <class U = value_type>
		std::uintptr_t write_vfunc(std::size_t a_idx, std::uintptr_t a_newFunc)
			requires(std::same_as<U, std::uintptr_t>)
		{
			const auto addr = address() + (sizeof(void*) * a_idx);
			const auto result = *reinterpret_cast<std::uintptr_t*>(addr);
			WriteSafeData(addr, a_newFunc);
			return result;
		}

		template <class F>
		std::uintptr_t write_vfunc(std::size_t a_idx, F a_newFunc)
			requires(std::same_as<value_type, std::uintptr_t>)
		{
			return write_vfunc(a_idx, REX::UNRESTRICTED_CAST<std::uintptr_t>(a_newFunc));
		}

	private:
		// clang-format off
		[[nodiscard]] static std::uintptr_t base()
		{
			const auto mod = REX::FModule::GetExecutingModule();
			return mod.GetBaseAddress();
		}
		// clang-format on

		std::uintptr_t _impl{ 0 };
	};
}


