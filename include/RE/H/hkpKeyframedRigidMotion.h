#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpMotion.h"

namespace RE
{
	class hkMatrix3;
	class hkVector4;
	class hkpMaxSizeMotion;

	class alignas(16) hkpKeyframedRigidMotion :
		public hkpMotion  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpKeyframedRigidMotion };
		static constexpr auto VTABLE{ VTABLE::hkpKeyframedRigidMotion };

		// override (hkpMotion)
		virtual ~hkpKeyframedRigidMotion() = default;                                                            // 00
		virtual void setMass(float mass) override;                                                               // 03
		virtual void setMassInv(float massInv) override;                                                         // 04
		virtual void setInertiaLocal(const hkMatrix3* a_arg1) override;                                          // 07
		virtual void setInertiaInvLocal(const hkMatrix3* a_arg1) override;                                       // 08
		virtual void applyLinearImpulse(hkVector4 const& imp) override;                                          // 13
		virtual void applyPointImpulse(const hkVector4* a_arg1, const hkVector4* a_arg2) override;               // 14
		virtual void applyAngularImpulse(const hkVector4* a_arg1) override;                                      // 15
		virtual void applyForce(const float a_arg1, const hkVector4* a_arg2, const hkVector4* a_arg3) override;  // 16
		virtual void applyForce(const float a_arg1, const hkVector4* a_arg2) override;                           // 17
		virtual void applyTorque(const float a_arg1, const hkVector4* a_arg2) override;                          // 18

		// add
		virtual void setStepPosition(float position, float timestep);  // 1A
		virtual void setStoredMotion(hkpMaxSizeMotion* savedMotion);   // 1B
	};
}
