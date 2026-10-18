#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/Tile.h"

namespace RE
{
	class NiNode;

	class TileRect :
		public Tile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TileRect };
		static constexpr auto VTABLE{ VTABLE::TileRect };

		// override (Tile)
		virtual ~TileRect() = default;                                                                // 00
		virtual void Init(Tile* apParent, char const* apName, Tile* apReplacedTile) override;         // 01
		virtual NiNode* MakeNode() override;                                                          // 02
		virtual std::int32_t GetType() override;                                                      // 03
		virtual char const* GetTypeName() override;                                                   // 04
		virtual Tile* PostParse(std::int32_t aiTrait, float afValue, char const* axString) override;  // 06

		TileRect* ctor()
		{
			using func_t = TileRect*(__thiscall*)(TileRect*);
			static REL::Relocation<func_t> func{ Offsets::TileRect::ctor };
			return func(this);
		}

	public:
		// members
		bool         bIsScissor;  // 38
		std::uint8_t pad39[0x3];  // 39
	};
	static_assert(sizeof(TileRect) == 0x3C);
}
