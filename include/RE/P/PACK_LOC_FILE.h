#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class PACK_LOC_FILE
	{
	public:
		void Endian()
		{
			using func_t = decltype(&PACK_LOC_FILE::Endian);
			static REL::Relocation<func_t> func{ Offsets::PACK_LOC_FILE::Endian };
			func(this);
		}

	public:
		// members
		char          eLocType;    // 00
		std::uint8_t  pad01[0x3];  // 01
		std::uint32_t iFormID;     // 04
		std::uint32_t iRadius;     // 08
	};
	static_assert(sizeof(PACK_LOC_FILE) == 0xC);
}
