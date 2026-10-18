#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkMatrix3.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpCollidableQualityType.h"
#include "RE/H/hkpMaterial_ResponseType.h"
#include "RE/H/hkpMotion_MotionType.h"

namespace RE
{
	class hkLocalFrame;
	class hkpShape;

	class alignas(16) hkpRigidBodyCinfo
	{
	public:
		enum class SolverDeactivation : std::int32_t
		{
			kSOLVER_DEACTIVATION_INVALID = 0x0,
			kSOLVER_DEACTIVATION_OFF = 0x1,
			kSOLVER_DEACTIVATION_LOW = 0x2,
			kSOLVER_DEACTIVATION_MEDIUM = 0x3,
			kSOLVER_DEACTIVATION_HIGH = 0x4,
			kSOLVER_DEACTIVATION_MAX = 0x5,
		};

		// members
		std::uint32_t                                              m_collisionFilterInfo;                   // 00?
		const hkpShape*                                            m_shape;                                 // 04?
		hkLocalFrame*                                              m_localFrame;                            // 08?
		hkEnum<hkpMaterial_ResponseType, std::int8_t>              m_collisionResponse;                     // 0C?
		std::uint8_t                                               pad0D;                                   // 0D
		std::uint16_t                                              m_contactPointCallbackDelay;             // 0E?
		hkVector4                                                  m_position;                              // 10?
		hkQuaternion                                               m_rotation;                              // 20?
		hkVector4                                                  m_linearVelocity;                        // 30?
		hkVector4                                                  m_angularVelocity;                       // 40?
		hkMatrix3                                                  m_inertiaTensor;                         // 50?
		hkVector4                                                  m_centerOfMass;                          // 80?
		float                                                      m_mass;                                  // 90?
		float                                                      m_linearDamping;                         // 94?
		float                                                      m_angularDamping;                        // 98?
		float                                                      m_gravityFactor;                         // 9C?
		float                                                      m_friction;                              // A0?
		float                                                      m_restitution;                           // A4?
		float                                                      m_maxLinearVelocity;                     // A8?
		float                                                      m_maxAngularVelocity;                    // AC?
		float                                                      m_allowedPenetrationDepth;               // B0?
		hkEnum<hkpMotion_MotionType, std::int8_t>                  m_motionType;                            // B4?
		hkBool                                                     m_enableDeactivation;                    // B5?
		std::uint16_t                                              padB6;                                   // B6
		hkEnum<hkpRigidBodyCinfo::SolverDeactivation, std::int8_t> m_solverDeactivation;                    // B8?
		std::uint8_t                                               padB9[0x3];                              // B9
		hkEnum<hkpCollidableQualityType, std::int8_t>              m_qualityType;                           // BC?
		char                                                       m_autoRemoveLevel;                       // BD?
		std::uint8_t                                               m_responseModifierFlags;                 // BE?
		char                                                       m_numShapeKeysInContactPointProperties;  // BF?
		hkBool                                                     m_forceCollideOntoPpu;                   // C0?
		std::uint8_t                                               padC1[0xF];                              // C1
	};
}
