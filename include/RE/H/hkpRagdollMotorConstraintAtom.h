#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class alignas(16) hkpRagdollMotorConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_isEnabled, m_initializedOffset, m_previousTargetAnglesOffset, m_target_bRca, m_motors
		std::uint8_t pad04[0xC];  // 04
	};
}
