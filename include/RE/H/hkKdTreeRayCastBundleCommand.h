#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpWorldRayCastInput.h"

namespace RE
{
	class hkpWorldRayCastOutput;

	class alignas(16) hkKdTreeRayCastBundleCommand
	{
	public:
		// members
		hkpWorldRayCastInput   m_rayInput[4];        // 00?
		hkBool                 m_stopAfterFirstHit;  // C0?
		std::uint8_t           padC1[0x3];           // C1
		hkpWorldRayCastOutput* m_results;            // C4?
		std::int32_t           m_numResultsOut[4];   // C8?
		std::uint8_t           padD8[0x8];           // D8
	};
}
