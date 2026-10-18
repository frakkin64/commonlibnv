#pragma once

#include "REX/BASE.h"

#pragma pack(push, 1)

namespace REL::ASM
{
	template <std::uint8_t OP>
	struct BRANCH5
	{
		explicit constexpr BRANCH5(const std::int32_t a_disp) :
			disp(a_disp)
		{}

		explicit constexpr BRANCH5(const std::uintptr_t a_address, const std::uintptr_t a_fn) :
			disp(static_cast<std::int32_t>(a_fn - (a_address + sizeof(BRANCH5))))
		{}

		static std::uintptr_t TARGET(const std::uintptr_t a_address)
		{
			const auto branch = reinterpret_cast<BRANCH5*>(a_address);
			const auto begin = reinterpret_cast<std::uint8_t*>(a_address);
			const auto address = (begin + sizeof(BRANCH5)) + branch->disp;
			return reinterpret_cast<std::uintptr_t>(address);
		}

		std::uint8_t op{ OP };  // 0
		std::int32_t disp;      // 1
	};

	using CALL5 = BRANCH5<0xE8>;
	static_assert(sizeof(CALL5) == 0x5);

	using JMP5 = BRANCH5<0xE9>;
	static_assert(sizeof(JMP5) == 0x5);

	template <std::uint8_t RM>
	struct BRANCH6
	{
		explicit constexpr BRANCH6(const std::int32_t a_disp) :
			disp(a_disp)
		{}

		// x86: the operand is the absolute address of the 4-byte cell that holds the destination (call/jmp dword ptr [abs32])
		explicit constexpr BRANCH6(const std::uintptr_t, const std::uintptr_t a_cell) :
			disp(static_cast<std::int32_t>(a_cell))
		{}

		// the destination stored in the cell
		static std::uintptr_t TARGET(const std::uintptr_t a_address)
		{
			const auto branch = reinterpret_cast<BRANCH6*>(a_address);
			return *reinterpret_cast<std::uintptr_t*>(static_cast<std::uintptr_t>(branch->disp));
		}

		std::uint8_t op{ 0xFF };  // 0
		std::uint8_t rm{ RM };    // 1
		std::int32_t disp;        // 2
	};

	using CALL6 = BRANCH6<0x15>;
	static_assert(sizeof(CALL6) == 0x6);

	using JMP6 = BRANCH6<0x25>;
	static_assert(sizeof(JMP6) == 0x6);


}

#pragma pack(pop)
