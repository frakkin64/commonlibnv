#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class WaterZone;

	class ExtraWaterZoneMap :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraWaterZoneMap };
		static constexpr auto VTABLE{ VTABLE::ExtraWaterZoneMap };

		// override (BSExtraData)
		virtual ~ExtraWaterZoneMap() = default;  // 00

		ExtraWaterZoneMap* ctor()
		{
			using func_t = ExtraWaterZoneMap*(__thiscall*)(ExtraWaterZoneMap*);
			static REL::Relocation<func_t> func{ Offsets::ExtraWaterZoneMap::ctor };
			return func(this);
		}

	public:
		// members
		NiTMap<WaterZone*, std::int32_t> WaterZoneMap;       // 0C
		WaterZone*                       pHighestWaterZone;  // 1C
	};
	static_assert(sizeof(ExtraWaterZoneMap) == 0x20);
}
