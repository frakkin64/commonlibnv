#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class AudioMarkerData;
	class TESObjectREFR;

	class AudioMarkerInfo
	{
	public:
		// members
		TESObjectREFR*   pMarkerRef;   // 00
		AudioMarkerData* pMarkerData;  // 04
	};
	static_assert(sizeof(AudioMarkerInfo) == 0x8);
}
