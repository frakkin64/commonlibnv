#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class LEVELED_OBJECT_FILE
	{
	public:
		void Endian()
		{
			using func_t = decltype(&LEVELED_OBJECT_FILE::Endian);
			static REL::Relocation<func_t> func{ Offsets::LEVELED_OBJECT_FILE::Endian };
			func(this);
		}

	public:
		// members
		std::uint16_t sLevel;   // 00
		std::uint16_t pad02;    // 02
		std::uint32_t iFormID;  // 04
		std::uint16_t sCount;   // 08
		std::uint16_t pad0A;    // 0A
	};
	static_assert(sizeof(LEVELED_OBJECT_FILE) == 0xC);
}
