#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpConeLimitConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_isEnabled, m_twistAxisInA, m_refAxisInB, m_angleMeasurementMode, m_memOffsetToAngleOffset, m_minAngle, m_maxAngle, m_angularLimitsTauFactor
	};
}
