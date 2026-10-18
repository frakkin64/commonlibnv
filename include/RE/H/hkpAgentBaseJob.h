#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpDynamicsJob.h"

namespace RE
{
	class hkpAgentBaseJob :
		public hkpDynamicsJob  // 00
	{
	public:
		// members
		// not placed: m_header, m_taskIndex, m_numTotalTasks, m_numElements, m_numElementsPerTask, m_elements, m_stepInfo
	};
}
