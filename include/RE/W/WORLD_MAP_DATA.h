#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class WORLD_MAP_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&WORLD_MAP_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::WORLD_MAP_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t iUsableWidth;   // 00
		std::uint32_t iUsableHeight;  // 04
		std::int16_t  sNWCellX;       // 08
		std::int16_t  sNWCellY;       // 0A
		std::int16_t  sSECellX;       // 0C
		std::int16_t  sSECellY;       // 0E
	};
	static_assert(sizeof(WORLD_MAP_DATA) == 0x10);
}
