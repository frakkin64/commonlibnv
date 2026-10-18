#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TileRect.h"

namespace RE
{
	class Menu;
	class NiNode;
	class Tile;

	class TileMenu :
		public TileRect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TileMenu };
		static constexpr auto VTABLE{ VTABLE::TileMenu };

		// override (TileRect)
		virtual ~TileMenu() = default;                                                                // 00
		virtual void Init(Tile* apParent, char const* apName, Tile* apReplacedTile) override;         // 01
		virtual NiNode* MakeNode() override;                                                          // 02
		virtual std::int32_t GetType() override;                                                      // 03
		virtual char const* GetTypeName() override;                                                   // 04
		virtual Tile* PostParse(std::int32_t aiTrait, float afValue, char const* axString) override;  // 06
		virtual void ForceTextureRelease() override;                                                  // 07

		// members
		Menu* pMenu;  // 3C
	};
	static_assert(sizeof(TileMenu) == 0x40);
}
