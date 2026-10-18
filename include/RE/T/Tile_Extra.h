#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiNode;
	class Tile;

	class Tile_Extra :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Tile_Extra };
		static constexpr auto VTABLE{ VTABLE::Tile_Extra };

		// override (NiExtraData)
		virtual ~Tile_Extra() = default;  // 00

		Tile_Extra* ctor(Tile* t, NiNode* n)
		{
			using func_t = Tile_Extra*(__thiscall*)(Tile_Extra*, Tile*, NiNode*);
			static REL::Relocation<func_t> func{ Offsets::Tile_Extra::ctor };
			return func(this, t, n);
		}

	public:
		// members
		Tile*   pTile;  // 0C
		NiNode* pNode;  // 10
	};
	static_assert(sizeof(Tile_Extra) == 0x14);
}
