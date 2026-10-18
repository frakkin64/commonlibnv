#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSOcclusionQuery;

	// not confirmed: no named code in the executable refers to this type
	class ReferenceVolume
	{
	public:
		// members
		NiPoint3          Center;           // 00?
		float             fRadius;          // 0C?
		std::uint32_t     uiReferenceID;    // 10?
		BSOcclusionQuery* pOcclusionQuery;  // 14?
		bool              bOccluded;        // 18?
		bool              bWaiting;         // 19?
		bool              bPerformTest;     // 1A?
		std::uint8_t      pad1B;            // 1B
		std::uint32_t     uiPixelCount;     // 1C?
	};
}
