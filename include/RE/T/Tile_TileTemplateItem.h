#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"

namespace RE
{
	class Tile_TileTemplateItem
	{
	public:
		// members
		std::int32_t    iCmd;    // 00?
		float           fVal;    // 04?
		BSStringT<char> xStr;    // 08?
		std::uint8_t    u[0x4];  // 10? opaque: Tile::TileTemplateItem::<unnamed_type_u>
		std::int32_t    iLine;   // 14?
	};
}
