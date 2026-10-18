#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectCELL;
	class TESWorldSpace;

	class EXTERIOR_CELL_DATA
	{
	public:
		// members
		std::int32_t   iX;          // 00
		std::int32_t   iY;          // 04
		TESWorldSpace* pWorld;      // 08
		TESObjectCELL* pCell;       // 0C
		bool           bDone;       // 10
		std::uint8_t   pad11[0x3];  // 11
	};
}
