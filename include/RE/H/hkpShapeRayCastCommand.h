#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpShapeRayCastInput.h"

namespace RE
{
	class hkpCollidable;
	class hkpWorldRayCastOutput;

	class alignas(16) hkpShapeRayCastCommand
	{
	public:
		// members
		hkpShapeRayCastInput   m_rayInput;         // 00?
		std::uint32_t          m_filterType;       // 30?
		std::int32_t           m_filterSize;       // 34?
		const hkpCollidable**  m_collidables;      // 38?
		std::int32_t           m_numCollidables;   // 3C?
		hkpWorldRayCastOutput* m_results;          // 40?
		std::int32_t           m_resultsCapacity;  // 44?
		std::int32_t           m_numResultsOut;    // 48?
		hkBool                 m_useCollector;     // 4C?
		std::uint8_t           pad4D[0x3];         // 4D
	};
}
