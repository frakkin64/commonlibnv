#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkpCollidable;
	class hkpRootCdPoint;

	class alignas(16) hkpPairLinearCastCommand
	{
	public:
		// members
		hkVector4            m_from;                       // 00?
		hkVector4            m_to;                         // 10?
		const hkpCollidable* m_collidableA;                // 20?
		const hkpCollidable* m_collidableB;                // 24?
		hkpRootCdPoint*      m_results;                    // 28?
		std::int32_t         m_resultsCapacity;            // 2C?
		std::int32_t         m_numResultsOut;              // 30?
		hkpRootCdPoint*      m_startPointResults;          // 34?
		std::int32_t         m_startPointResultsCapacity;  // 38?
		std::int32_t         m_startPointNumResultsOut;    // 3C?
	};
}
