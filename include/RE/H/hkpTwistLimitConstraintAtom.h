#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpTwistLimitConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_isEnabled, m_twistAxis, m_refAxis, m_minAngle, m_maxAngle, m_angularLimitsTauFactor
	};
}
