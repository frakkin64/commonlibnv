#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkHalf.h"
#include "RE/H/hkMotionState.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpMotion_MotionType.h"

namespace RE
{
	class hkMatrix3;
	class hkQuaternion;
	class hkTransform;
	class hkpMaxSizeMotion;

	class alignas(16) hkpMotion :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMotion };
		static constexpr auto VTABLE{ VTABLE::hkpMotion };

		using MotionType = hkpMotion_MotionType;

		// override (hkReferencedObject)
		virtual ~hkpMotion() = default;  // 00

		// add
		virtual void setMass(float mass);                                                                                        // 03
		virtual void setMassInv(float massInv);                                                                                  // 04
		virtual void getInertiaLocal(hkMatrix3* a_arg1);                                                                         // 05
		virtual void getInertiaWorld(hkMatrix3* a_arg1);                                                                         // 06
		virtual void setInertiaLocal(const hkMatrix3* a_arg1);                                                                   // 07
		virtual void setInertiaInvLocal(const hkMatrix3* a_arg1);                                                                // 08
		virtual void getInertiaInvLocal(hkMatrix3* a_arg1);                                                                      // 09
		virtual void getInertiaInvWorld(hkMatrix3* a_arg1);                                                                      // 0A
		virtual void setCenterOfMassInLocal(hkVector4 const& centerOfMass);                                                      // 0B
		virtual void setPosition(hkVector4 const& position);                                                                     // 0C
		virtual void setRotation(hkQuaternion const& rotation);                                                                  // 0D
		virtual void setPositionAndRotation(hkVector4 const& position, hkQuaternion const& rotation);                            // 0E
		virtual void setTransform(hkTransform const& transform);                                                                 // 0F
		virtual void setLinearVelocity(hkVector4 const& newVel);                                                                 // 10
		virtual void setAngularVelocity(hkVector4 const& newVel);                                                                // 11
		virtual void getProjectedPointVelocity(const hkVector4* a_arg1, const hkVector4* a_arg2, float* a_arg3, float* a_arg4);  // 12
		virtual void applyLinearImpulse(hkVector4 const& imp);                                                                   // 13
		virtual void applyPointImpulse(const hkVector4* a_arg1, const hkVector4* a_arg2);                                        // 14
		virtual void applyAngularImpulse(const hkVector4* a_arg1);                                                               // 15
		virtual void applyForce(const float a_arg1, const hkVector4* a_arg2);                                                    // 17 (reversed overload group)
		virtual void applyForce(const float a_arg1, const hkVector4* a_arg2, const hkVector4* a_arg3);                           // 16 (reversed overload group)
		virtual void applyTorque(const float a_arg1, const hkVector4* a_arg2);                                                   // 18
		virtual void getMotionStateAndVelocitiesAndDeactivationType(hkpMotion* motionOut);                                       // 19

		float getMass() const
		{
			using func_t = decltype(&hkpMotion::getMass);
			static REL::Relocation<func_t> func{ Offsets::hkpMotion::getMass };
			return func(this);
		}

	public:
		// members
		hkEnum<hkpMotion_MotionType, std::uint8_t> m_type;                              // 08
		std::uint8_t                               m_deactivationIntegrateCounter;      // 09
		std::uint16_t                              m_deactivationNumInactiveFrames[2];  // 0A
		std::uint16_t                              pad0E;                               // 0E
		hkMotionState                              m_motionState;                       // 10
		hkVector4                                  m_inertiaAndMassInv;                 // C0
		hkVector4                                  m_linearVelocity;                    // D0
		hkVector4                                  m_angularVelocity;                   // E0
		hkVector4                                  m_deactivationRefPosition[2];        // F0
		std::uint32_t                              m_deactivationRefOrientation[2];     // 110
		hkpMaxSizeMotion*                          m_savedMotion;                       // 118
		std::uint16_t                              m_savedQualityTypeIndex;             // 11C?
		hkHalf                                     m_gravityFactor;                     // 11E?
	};
}
