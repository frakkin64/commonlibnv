#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpAngLimitConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_isEnabled, m_limitAxis, m_minAngle, m_maxAngle, m_angularLimitsTauFactor
	};
}
