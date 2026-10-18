#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Z/ZoneEntry.h"

namespace RE
{
	class PlaceableWaterGroup;
	class TESObjectREFR;
	class TargetEntry;
	class hkpCollidable;

	class WaterZone :
		public ZoneEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::WaterZone };
		static constexpr auto VTABLE{ VTABLE::WaterZone };

		// override (ZoneEntry)
		virtual TargetEntry* AddTarget(TESObjectREFR* apTarget, hkpCollidable const* apCol, std::uint32_t aiFlags) override;  // 00

		// members
		float                fWaterHeight;  // 18
		PlaceableWaterGroup* pGroup;        // 1C
	};
	static_assert(sizeof(WaterZone) == 0x20);
}
