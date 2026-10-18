#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkpBinaryAction.h"

namespace RE
{
	class hkStepInfo;

	class alignas(16) hkpAngularDashpotAction :
		public hkpBinaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpAngularDashpotAction };
		static constexpr auto VTABLE{ VTABLE::hkpAngularDashpotAction };

		// override (hkpBinaryAction)
		virtual ~hkpAngularDashpotAction() = default;                 // 00
		virtual void applyAction(const hkStepInfo* a_arg1) override;  // 03

		// members
		hkQuaternion m_rotation;  // 20?
		float        m_strength;  // 30?
		float        m_damping;   // 34?
		std::uint8_t pad38[0x8];  // 38
	};
}
