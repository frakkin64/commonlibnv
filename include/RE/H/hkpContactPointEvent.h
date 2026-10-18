#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpCollisionEvent.h"

namespace RE
{
	class hkContactPoint;
	class hkpContactPointProperties;
	class hkpVelocityAccumulator;

	class hkpContactPointEvent :
		public hkpCollisionEvent  // 00
	{
	public:
		enum class Type : std::int32_t
		{
			kTYPE_TOI = 0x0,
			kTYPE_MANIFOLD = 0x1,
		};

		// members
		hkpContactPointEvent::Type m_type;                            // 10?
		hkContactPoint*            m_contactPoint;                    // 14?
		hkpContactPointProperties* m_contactPointProperties;          // 18?
		hkBool                     m_firingCallbacksForFullManifold;  // 1C?
		hkBool                     m_firstCallbackForFullManifold;    // 1D?
		hkBool                     m_lastCallbackForFullManifold;     // 1E?
		std::uint8_t               pad1F;                             // 1F
		float*                     m_separatingVelocity;              // 20?
		float*                     m_rotateNormal;                    // 24?
		std::uint32_t*             m_shapeKeyStorage;                 // 28?
		hkpVelocityAccumulator*    m_accumulators[2];                 // 2C?
	};
}
