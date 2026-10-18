#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpLimitedForceConstraintMotor.h"

namespace RE
{
	class hkpSpringDamperConstraintMotor :
		public hkpLimitedForceConstraintMotor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSpringDamperConstraintMotor };
		static constexpr auto VTABLE{ VTABLE::hkpSpringDamperConstraintMotor };

		// override (hkpLimitedForceConstraintMotor)
		virtual ~hkpSpringDamperConstraintMotor() = default;  // 00

		// members
		float m_springConstant;  // 14?
		float m_springDamping;   // 18?
	};
}
