#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"

namespace RE
{
	class hkpConstraintQueryStepInfo
	{
	public:
		// members
		hkPadSpu<float> m_substepDeltaTime;            // 00?
		hkPadSpu<float> m_microStepDeltaTime;          // 04?
		hkPadSpu<float> m_substepInvDeltaTime;         // 08?
		hkPadSpu<float> m_frameDeltaTime;              // 0C?
		hkPadSpu<float> m_frameInvDeltaTime;           // 10?
		hkPadSpu<float> m_invNumSteps;                 // 14?
		hkPadSpu<float> m_invNumStepsTimesMicroSteps;  // 18?
		hkPadSpu<float> m_maxConstraintViolationSqrd;  // 1C?
		hkPadSpu<float> m_rhsFactor;                   // 20?
		hkPadSpu<float> m_virtMassFactor;              // 24?
		hkPadSpu<float> m_frictionRhsFactor;           // 28?
	};
}
