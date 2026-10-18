#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class Tile_BuildStorage;
	class Tile_TileTemplateItem;

	class Tile_TileTemplate
	{
	public:
		void AddPair(std::int32_t aiCmd, char const* apStr, std::int32_t aiLine, bool aiPreserveStrings)
		{
			using func_t = decltype(&Tile_TileTemplate::AddPair);
			static REL::Relocation<func_t> func{ Offsets::Tile_TileTemplate::AddPair };
			func(this, aiCmd, apStr, aiLine, aiPreserveStrings);
		}

	public:
		// members
		NiFixedString                          xName;    // 00?
		Tile_BuildStorage*                     pParent;  // 04?
		NiTPointerList<Tile_TileTemplateItem*> xList;    // 08?
	};
}
