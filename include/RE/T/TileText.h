#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/T/Tile.h"

namespace RE
{
	class NiNode;

	class TileText :
		public Tile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TileText };
		static constexpr auto VTABLE{ VTABLE::TileText };

		// override (Tile)
		virtual ~TileText() = default;                                                                // 00
		virtual void Init(Tile* apParent, char const* apName, Tile* apReplacedTile) override;         // 01
		virtual NiNode* MakeNode() override;                                                          // 02
		virtual std::int32_t GetType() override;                                                      // 03
		virtual char const* GetTypeName() override;                                                   // 04
		virtual Tile* PostParse(std::int32_t aiTrait, float afValue, char const* axString) override;  // 06

		// members
		float        fTextWidth;  // 38?
		NiPoint3     xOffset;     // 3C?
		bool         bIsHyper;    // 48
		std::uint8_t pad49[0x3];  // 49
	};
}
