#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpBinaryAction.h"

namespace RE
{
	class hkStepInfo;

	class alignas(16) hkpDashpotAction :
		public hkpBinaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDashpotAction };
		static constexpr auto VTABLE{ VTABLE::hkpDashpotAction };

		// override (hkpBinaryAction)
		virtual ~hkpDashpotAction() = default;                        // 00
		virtual void applyAction(const hkStepInfo* a_arg1) override;  // 03

		// members
		hkVector4    m_point[2];  // 20?
		float        m_strength;  // 40?
		float        m_damping;   // 44?
		std::uint8_t pad48[0x8];  // 48
		hkVector4    m_impulse;   // 50?
	};
}
