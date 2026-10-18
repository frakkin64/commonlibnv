#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpLimitedForceConstraintMotor.h"

namespace RE
{
	class hkpPositionConstraintMotor :
		public hkpLimitedForceConstraintMotor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPositionConstraintMotor };
		static constexpr auto VTABLE{ VTABLE::hkpPositionConstraintMotor };

		// override (hkpLimitedForceConstraintMotor)
		virtual ~hkpPositionConstraintMotor() = default;  // 00

		// members
		float m_tau;                           // 14?
		float m_damping;                       // 18?
		float m_proportionalRecoveryVelocity;  // 1C?
		float m_constantRecoveryVelocity;      // 20?
	};
}
