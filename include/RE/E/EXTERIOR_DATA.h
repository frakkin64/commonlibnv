#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class EXTERIOR_DATA
	{
	public:
		EXTERIOR_DATA* ctor()
		{
			using func_t = EXTERIOR_DATA*(__thiscall*)(EXTERIOR_DATA*);
			static REL::Relocation<func_t> func{ Offsets::EXTERIOR_DATA::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t iCellX;          // 00
		std::int32_t iCellY;          // 04
		char         cLandHideFlags;  // 08
		std::uint8_t pad09[0x3];      // 09
	};
	static_assert(sizeof(EXTERIOR_DATA) == 0xC);
}
