#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContactPoint.h"

namespace RE
{
	class hkpRigidBody;

	class alignas(16) hkpVehicleWheelCollide_CollisionDetectionWheelOutput
	{
	public:
		// members
		hkContactPoint m_contactPoint;             // 00?
		float          m_contactFriction;          // 20?
		hkpRigidBody*  m_contactBody;              // 24?
		std::uint32_t  m_contactShapeKey[8];       // 28?
		float          m_currentSuspensionLength;  // 48?
		float          m_suspensionClosingSpeed;   // 4C?
		float          m_suspensionScalingFactor;  // 50?
		std::uint8_t   pad54[0xC];                 // 54
	};
}
