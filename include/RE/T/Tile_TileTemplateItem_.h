#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Tile;
	class Tile_TileTemplate;

	template <class T>
	union Tile_TileTemplateItem_
	{
	public:
		// members
		std::int32_t       iTA;        // 00
		Tile*              pTile;      // 00
		Tile_TileTemplate* pTemplate;  // 00
	};
}
