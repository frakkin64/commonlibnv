#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class AudioBuoyMarkerData;
	class TESObjectREFR;

	// not confirmed: no named code in the executable refers to this type
	class AudioBuoyMarkerInfo
	{
	public:
		// members
		TESObjectREFR*       pBuoyRef;   // 00?
		AudioBuoyMarkerData* pBuoyData;  // 04?
		float                fAngle;     // 08?
	};
}
