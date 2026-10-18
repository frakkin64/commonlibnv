#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpLimitedForceConstraintMotor.h"

namespace RE
{
	class hkpVelocityConstraintMotor :
		public hkpLimitedForceConstraintMotor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVelocityConstraintMotor };
		static constexpr auto VTABLE{ VTABLE::hkpVelocityConstraintMotor };

		// override (hkpLimitedForceConstraintMotor)
		virtual ~hkpVelocityConstraintMotor() = default;  // 00

		// members
		float        m_tau;                                     // 14?
		float        m_velocityTarget;                          // 18?
		hkBool       m_useVelocityTargetFromConstraintTargets;  // 1C?
		std::uint8_t pad1D[0x3];                                // 1D
	};
}
