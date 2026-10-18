#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSOcclusionQuery;

	// not confirmed: no named code in the executable refers to this type
	class SunOcclusionTest
	{
	public:
		// members
		BSOcclusionQuery* pOcclusionQuery;   // 00?
		bool              bWaiting;          // 04?
		std::uint8_t      pad05[0x3];        // 05
		float             fPercentOccluded;  // 08?
		std::uint32_t     uiPixelCount;      // 0C?
		std::uint32_t     uiFrameCount;      // 10?
	};
}
