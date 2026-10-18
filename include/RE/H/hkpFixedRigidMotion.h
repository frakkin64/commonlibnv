#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpKeyframedRigidMotion.h"

namespace RE
{
	class hkVector4;
	class hkpMotion;

	class alignas(16) hkpFixedRigidMotion :
		public hkpKeyframedRigidMotion  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpFixedRigidMotion };
		static constexpr auto VTABLE{ VTABLE::hkpFixedRigidMotion };

		// override (hkpKeyframedRigidMotion)
		virtual ~hkpFixedRigidMotion() = default;                               // 00
		virtual void setLinearVelocity(hkVector4 const& newVel) override;       // 10
		virtual void setAngularVelocity(hkVector4 const& newVel) override;      // 11
		virtual void setStepPosition(float position, float timestep) override;  // 1A

		// add
		virtual void getPositionAndVelocities(hkpMotion* motionOut);  // 1C
	};
}
