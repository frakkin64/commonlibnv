#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class PACK_TARG_FILE
	{
	public:
		void Endian()
		{
			using func_t = decltype(&PACK_TARG_FILE::Endian);
			static REL::Relocation<func_t> func{ Offsets::PACK_TARG_FILE::Endian };
			func(this);
		}

	public:
		// members
		std::uint8_t  eTargType;       // 00
		std::uint8_t  pad01[0x3];      // 01
		std::uint32_t iFormID;         // 04
		std::int32_t  iValue;          // 08
		float         fAcquireRadius;  // 0C
	};
	static_assert(sizeof(PACK_TARG_FILE) == 0x10);
}
