#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpVehicleVelocityDamper.h"

namespace RE
{
	class hkpVehicleInstance;

	class hkpVehicleDefaultVelocityDamper :
		public hkpVehicleVelocityDamper  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleDefaultVelocityDamper };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleDefaultVelocityDamper };

		// override (hkpVehicleVelocityDamper)
		virtual ~hkpVehicleDefaultVelocityDamper() = default;  // 00

		// add
		virtual void applyVelocityDamping(float a_arg1, hkpVehicleInstance& a_arg2);  // 03

		// members
		float m_normalSpinDamping;     // 10
		float m_collisionSpinDamping;  // 14?
		float m_collisionThreshold;    // 18?
	};
}
