#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkpShapePhantom;

	class alignas(16) hkpCharacterProxyCinfo
	{
	public:
		// members
		hkVector4        m_position;                       // 00?
		hkVector4        m_velocity;                       // 10?
		float            m_dynamicFriction;                // 20?
		float            m_staticFriction;                 // 24?
		float            m_keepContactTolerance;           // 28?
		std::uint32_t    pad2C;                            // 2C
		hkVector4        m_up;                             // 30?
		float            m_extraUpStaticFriction;          // 40?
		float            m_extraDownStaticFriction;        // 44?
		hkpShapePhantom* m_shapePhantom;                   // 48?
		float            m_keepDistance;                   // 4C?
		float            m_contactAngleSensitivity;        // 50?
		std::uint32_t    m_userPlanes;                     // 54?
		float            m_maxCharacterSpeedForSolver;     // 58?
		float            m_characterStrength;              // 5C?
		float            m_characterMass;                  // 60?
		float            m_maxSlope;                       // 64?
		float            m_penetrationRecoverySpeed;       // 68?
		std::int32_t     m_maxCastIterations;              // 6C?
		bool             m_refreshManifoldInCheckSupport;  // 70?
		std::uint8_t     pad71[0xF];                       // 71
	};
}
