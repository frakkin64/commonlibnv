#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpUnaryAction.h"

namespace RE
{
	class hkStepInfo;

	class alignas(16) hkpMotorAction :
		public hkpUnaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMotorAction };
		static constexpr auto VTABLE{ VTABLE::hkpMotorAction };

		// override (hkpUnaryAction)
		virtual ~hkpMotorAction() = default;                          // 00
		virtual void applyAction(const hkStepInfo* a_arg1) override;  // 03

		// members
		std::uint32_t pad1C;       // 1C
		hkVector4     m_axis;      // 20?
		float         m_spinRate;  // 30?
		float         m_gain;      // 34?
		hkBool        m_active;    // 38?
		std::uint8_t  pad39[0x7];  // 39
	};
}
