#include "REL/Trampoline.h"

#include "REL/ASM.h"
#include "REL/Relocation.h"
#include "REL/Utility.h"

#include "REX/FModule.h"
#include "REX/LOG.h"
#include "REX/W32/KERNEL32.h"

// xbyak brings in <Windows.h>
#ifdef COMMONLIB_OPTION_XBYAK
#	include <xbyak/xbyak.h>
#	undef ERROR
#	undef max
#	undef MEM_COMMIT
#	undef MEM_FREE
#	undef MEM_RELEASE
#	undef MEM_RESERVE
#	undef PAGE_EXECUTE_READWRITE
#endif

namespace REL
{
	namespace Impl
	{
		// every address is reachable with rel32 / abs32 on x86, so the memory can be anywhere
		void* AllocTrampoline(const std::size_t a_size)
		{
			return REX::W32::VirtualAlloc(nullptr, a_size, REX::W32::MEM_COMMIT | REX::W32::MEM_RESERVE, REX::W32::PAGE_EXECUTE_READWRITE);
		}
	}

	Trampoline::Trampoline(Trampoline&& a_rhs) noexcept
	{
		m_branch6 = std::move(a_rhs.m_branch6);
		m_name = std::move(a_rhs.m_name);
		m_deleter = std::move(a_rhs.m_deleter);
		m_data = std::exchange(a_rhs.m_data, nullptr);
		m_capacity = std::exchange(a_rhs.m_capacity, 0);
		m_size = std::exchange(a_rhs.m_size, 0);
	}

	void Trampoline::create(const std::size_t a_size)
	{
		if (a_size == 0) {
			REX::FAIL("Cannot create a trampoline with a zero size."sv);
		}

		auto mem = Impl::AllocTrampoline(a_size);
		if (!mem) {
			REX::FAIL("Failed to create trampoline."sv);
		}

		set_trampoline(mem, a_size, [](void* a_mem, std::size_t) {
			REX::W32::VirtualFree(a_mem, 0, REX::W32::MEM_RELEASE);
		});
	}

	void Trampoline::set_trampoline(void* a_trampoline, const std::size_t a_size, deleter_type a_deleter)
	{
		auto trampoline = static_cast<std::byte*>(a_trampoline);
		if (trampoline)
			std::memset(trampoline, REL::INT3, a_size);

		release();

		m_deleter = std::move(a_deleter);
		m_data = trampoline;
		m_capacity = a_size;
		m_size = 0;

		stats();
	}

	void* Trampoline::allocate(const std::size_t a_size)
	{
		if (a_size > free_size()) {
			REX::FAIL("Failed to handle allocation request!\nAllocate Size: {}\nFree Size: {}"sv, a_size, free_size());
		}

		auto mem = m_data + m_size;
		m_size += a_size;

		stats();
		return mem;
	}

#ifdef COMMONLIB_OPTION_XBYAK
	void* Trampoline::allocate(const Xbyak::CodeGenerator& a_code)
	{
		auto mem = allocate(a_code.getSize());
		std::memcpy(mem, a_code.getCode(), a_code.getSize());
		return mem;
	}
#endif

	std::uintptr_t Trampoline::write_call5(const std::uintptr_t a_src, const std::uintptr_t a_dst)
	{
		const auto original = ASM::CALL5::TARGET(a_src);
		ASM::CALL5 assembly(a_src, allocate_branch5(a_dst));
		REL::WriteSafeData(a_src, assembly);
		return original;
	}

	std::uintptr_t Trampoline::write_call6(const std::uintptr_t a_src, const std::uintptr_t a_dst)
	{
		const auto original = ASM::CALL6::TARGET(a_src);
		ASM::CALL6 assembly(a_src, allocate_branch6(a_dst));
		REL::WriteSafeData(a_src, assembly);
		return original;
	}

	std::uintptr_t Trampoline::write_jmp5(const std::uintptr_t a_src, const std::uintptr_t a_dst)
	{
		const auto original = ASM::JMP5::TARGET(a_src);
		ASM::JMP5  assembly(a_src, allocate_branch5(a_dst));
		REL::WriteSafeData(a_src, assembly);
		return original;
	}

	std::uintptr_t Trampoline::write_jmp6(const std::uintptr_t a_src, const std::uintptr_t a_dst)
	{
		const auto original = ASM::JMP6::TARGET(a_src);
		ASM::JMP6  assembly(a_src, allocate_branch6(a_dst));
		REL::WriteSafeData(a_src, assembly);
		return original;
	}

	std::uintptr_t Trampoline::allocate_branch5(const std::uintptr_t a_dst)
	{
		// x86: a rel32 reaches the destination directly
		return a_dst;
	}

	std::uintptr_t Trampoline::allocate_branch6(const std::uintptr_t a_dst)
	{
		if (m_capacity == 0) {
			create(4096);  // nothing was created for this plugin: a small pool for the pointer cells
		}
		std::uintptr_t* mem = nullptr;
		if (const auto it = m_branch6.find(a_dst); it != m_branch6.end()) {
			mem = reinterpret_cast<std::uintptr_t*>(it->second);
			*mem = a_dst;
		} else {
			mem = allocate<std::uintptr_t>(a_dst);
			m_branch6.emplace(a_dst, reinterpret_cast<std::byte*>(mem));
		}

		return reinterpret_cast<std::uintptr_t>(mem);
	}

	void Trampoline::release()
	{
		if (m_data && m_deleter)
			m_deleter(m_data, m_capacity);

		m_branch6.clear();
		m_data = nullptr;
		m_capacity = 0;
		m_size = 0;
	}

	void Trampoline::stats() const
	{
		auto pct = (static_cast<double>(m_size) / static_cast<double>(m_capacity)) * 100.0;
		REX::DEBUG("Trampoline [{}]: {}B / {}B ({:05.2f}%)", m_name, m_size, m_capacity, pct);
	}

	Trampoline& GetTrampoline() noexcept
	{
		static Trampoline trampoline;
		return trampoline;
	}
}
