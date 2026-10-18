#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class MapMarkerData;
	class TESObjectREFR;

	// not confirmed: no named code in the executable refers to this type
	class MAP_MARKER_STRUCT
	{
	public:
		// members
		MapMarkerData* pData;  // 00?
		TESObjectREFR* pRef;   // 04?
	};
}
