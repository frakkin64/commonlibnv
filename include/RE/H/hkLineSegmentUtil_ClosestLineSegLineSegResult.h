#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkLineSegmentUtil_ClosestLineSegLineSegResult
	{
	public:
		// members
		hkVector4       m_closestPointA;          // 00?
		hkVector4       m_closestAminusClosestB;  // 10?
		hkPadSpu<float> m_distanceSquared;        // 20?
		std::uint8_t    pad24[0xC];               // 24
	};
}
