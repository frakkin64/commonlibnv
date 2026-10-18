#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContactPoint.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkpRigidBody;

	class alignas(16) hkpVehicleInstance_WheelInfo
	{
	public:
		// members
		hkContactPoint m_contactPoint;                     // 00?
		float          m_contactFriction;                  // 20?
		hkpRigidBody*  m_contactBody;                      // 24?
		std::uint32_t  m_contactShapeKey[8];               // 28?
		std::uint8_t   pad48[0x8];                         // 48
		hkVector4      m_hardPointWs;                      // 50?
		hkVector4      m_rayEndPointWs;                    // 60?
		float          m_currentSuspensionLength;          // 70?
		std::uint8_t   pad74[0xC];                         // 74
		hkVector4      m_suspensionDirectionWs;            // 80?
		hkVector4      m_spinAxisChassisSpace;             // 90?
		hkVector4      m_spinAxisWs;                       // A0?
		hkQuaternion   m_steeringOrientationChassisSpace;  // B0?
		float          m_spinVelocity;                     // C0?
		float          m_spinAngle;                        // C4?
		float          m_skidEnergyDensity;                // C8?
		float          m_sideForce;                        // CC?
		float          m_forwardSlipVelocity;              // D0?
		float          m_sideSlipVelocity;                 // D4?
		std::uint8_t   padD8[0x8];                         // D8
	};
}
