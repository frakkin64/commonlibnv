#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkpLimitedForceConstraintMotor.h"

namespace RE
{
	class hkpCallbackConstraintMotor :
		public hkpLimitedForceConstraintMotor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCallbackConstraintMotor };
		static constexpr auto VTABLE{ VTABLE::hkpCallbackConstraintMotor };

		enum class CallbackType : std::int32_t
		{
			kCALLBACK_MOTOR_TYPE_HAVOK_DEMO_SPRING_DAMPER = 0x0,
			kCALLBACK_MOTOR_TYPE_USER_0 = 0x1,
			kCALLBACK_MOTOR_TYPE_USER_1 = 0x2,
			kCALLBACK_MOTOR_TYPE_USER_2 = 0x3,
			kCALLBACK_MOTOR_TYPE_USER_3 = 0x4,
		};

		// override (hkpLimitedForceConstraintMotor)
		virtual ~hkpCallbackConstraintMotor() = default;  // 00

		// members
		void*                                                           m_callbackFunc;  // 14?
		hkEnum<hkpCallbackConstraintMotor::CallbackType, std::uint32_t> m_callbackType;  // 18?
		std::uint32_t                                                   m_userData0;     // 1C?
		std::uint32_t                                                   m_userData1;     // 20?
		std::uint32_t                                                   m_userData2;     // 24?
	};
}
