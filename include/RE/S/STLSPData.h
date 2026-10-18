#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class STLSPData :
		public NiRefObject  // 00
	{
	public:
		// members
		float* pLeafMaps;     // 08?
		float  fCurveScalar;  // 0C?
		float  fRock;         // 10?
		float  fRustle;       // 14?
		float  fRockSpeed;    // 18?
		float  fRustleSpeed;  // 1C?
	};
}
