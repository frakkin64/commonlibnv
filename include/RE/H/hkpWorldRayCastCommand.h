#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpWorldRayCastInput.h"

namespace RE
{
	class hkpWorldRayCastOutput;

	class alignas(16) hkpWorldRayCastCommand
	{
	public:
		// members
		hkpWorldRayCastInput   m_rayInput;           // 00?
		hkpWorldRayCastOutput* m_results;            // 30?
		std::int32_t           m_resultsCapacity;    // 34?
		std::int32_t           m_numResultsOut;      // 38?
		hkBool                 m_useCollector;       // 3C?
		hkBool                 m_stopAfterFirstHit;  // 3D?
		std::uint16_t          pad3E;                // 3E
	};
}
