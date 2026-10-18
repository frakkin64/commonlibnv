#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintMotor.h"

namespace RE
{
	class hkpLimitedForceConstraintMotor :
		public hkpConstraintMotor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpLimitedForceConstraintMotor };
		static constexpr auto VTABLE{ VTABLE::hkpLimitedForceConstraintMotor };

		// override (hkpConstraintMotor)
		virtual ~hkpLimitedForceConstraintMotor() = default;  // 00

		// members
		float m_minForce;  // 0C?
		float m_maxForce;  // 10?
	};
}
