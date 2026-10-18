#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class Tile_TileTemplate;

	class Tile_BuildStorage
	{
	public:
		Tile_BuildStorage* ctor()
		{
			using func_t = Tile_BuildStorage*(__thiscall*)(Tile_BuildStorage*);
			static REL::Relocation<func_t> func{ Offsets::Tile_BuildStorage::ctor };
			return func(this);
		}

	public:
		// members
		Tile_TileTemplate*               pTemplate;         // 00?
		BSSimpleList<Tile_TileTemplate*> xSubTemplates;     // 04?
		Tile_TileTemplate*               pCurrentTemplate;  // 0C?
		bool                             bDeleteTemplates;  // 10?
		std::uint8_t                     pad11[0x3];        // 11
	};
}
