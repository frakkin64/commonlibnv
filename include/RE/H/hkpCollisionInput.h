#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkpCollisionDispatcher;
	class hkpCollisionFilter;
	class hkpConvexListFilter;

	class alignas(16) hkpCollisionInput
	{
	public:
		class Aabb32Info;

		class alignas(16) Aabb32Info
		{
		public:
			// members
			hkVector4 m_bitOffsetLow;   // 00?
			hkVector4 m_bitOffsetHigh;  // 10?
			hkVector4 m_bitScale;       // 20?
		};

		// members
		hkPadSpu<hkpCollisionDispatcher*>    m_dispatcher;              // 00?
		hkPadSpu<std::int32_t>               m_weldClosestPoints;       // 04?
		hkPadSpu<float>                      m_tolerance;               // 08?
		hkPadSpu<hkpCollisionFilter const*>  m_filter;                  // 0C?
		hkPadSpu<hkpConvexListFilter const*> m_convexListFilter;        // 10?
		hkPadSpu<std::int32_t>               m_createPredictiveAgents;  // 14?
		std::uint8_t                         pad18[0x8];                // 18
		hkpCollisionInput::Aabb32Info        m_aabb32Info;              // 20?
	};
}
