#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStepInfo.h"
#include "RE/H/hkpSolverInfo.h"

namespace RE
{
	class alignas(16) hkpWorldDynamicsStepInfo
	{
	public:
		// members
		hkStepInfo    m_stepInfo;    // 00?
		hkpSolverInfo m_solverInfo;  // 10?
	};
}
