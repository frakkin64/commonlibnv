#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/RADIO_RANGE_TYPE.h"

namespace RE
{
	class TESObjectREFR;

	class RADIO_DATA
	{
	public:
		// members
		float            fRadius;       // 00
		RADIO_RANGE_TYPE eRangeType;    // 04
		float            fStaticPct;    // 08
		TESObjectREFR*   pPositionRef;  // 0C
	};
	static_assert(sizeof(RADIO_DATA) == 0x10);
}
