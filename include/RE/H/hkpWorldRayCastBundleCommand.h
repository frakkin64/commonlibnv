#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpWorldRayCastInput.h"

namespace RE
{
	class hkpWorldRayCastOutput;

	class alignas(16) hkpWorldRayCastBundleCommand
	{
	public:
		// members
		hkpWorldRayCastInput   m_rayInput[4];        // 00?
		std::int32_t           m_numActiveRays;      // C0?
		hkBool                 m_stopAfterFirstHit;  // C4?
		std::uint8_t           padC5[0x3];           // C5
		hkpWorldRayCastOutput* m_results[4];         // C8?
		std::int32_t           m_numResultsOut[4];   // D8?
		hkBool                 m_useCollector;       // E8?
		std::uint8_t           padE9[0x7];           // E9
	};
}
