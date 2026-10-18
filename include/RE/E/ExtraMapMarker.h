#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class MapMarkerData;

	class ExtraMapMarker :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraMapMarker };
		static constexpr auto VTABLE{ VTABLE::ExtraMapMarker };

		// override (BSExtraData)
		virtual ~ExtraMapMarker() = default;                    // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		MapMarkerData* pMapData;  // 0C
	};
	static_assert(sizeof(ExtraMapMarker) == 0x10);
}
