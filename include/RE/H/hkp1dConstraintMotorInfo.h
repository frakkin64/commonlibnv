#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"

namespace RE
{
	class hkp1dConstraintMotorInfo
	{
	public:
		// members
		hkPadSpu<float> m_targetPosition;  // 00?
		hkPadSpu<float> m_targetVelocity;  // 04?
		hkPadSpu<float> m_maxForce;        // 08?
		hkPadSpu<float> m_minForce;        // 0C?
		hkPadSpu<float> m_tau;             // 10?
		hkPadSpu<float> m_damping;         // 14?
	};
}
