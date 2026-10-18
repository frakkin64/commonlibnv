#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class WadingWaterData
	{
	public:
		// members
		NiPoint2 fDisplaceOffset;      // 00?
		NiPoint2 fLastDisplaceOffset;  // 08?
		NiPoint3 fLastPosition;        // 10?
	};
}
