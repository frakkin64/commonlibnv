#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpAngMotorConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		// members
		// not placed: m_isEnabled, m_motorAxis, m_initializedOffset, m_previousTargetAngleOffset, m_correspondingAngLimitSolverResultOffset, m_targetAngle, m_motor
	};
}
