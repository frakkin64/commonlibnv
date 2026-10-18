#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintInstance_ConstraintPriority.h"

namespace RE
{
	class hkpToiResources
	{
	public:
		// members
		hkpConstraintInstance_ConstraintPriority m_minPriorityToProcess;               // 00?
		std::int32_t                             m_maxNumEntities;                     // 04?
		std::int32_t                             m_maxNumActiveEntities;               // 08?
		std::int32_t                             m_maxNumConstraints;                  // 0C?
		std::int32_t                             m_numToiSolverIterations;             // 10?
		std::int32_t                             m_numForcedToiFinalSolverIterations;  // 14?
		char*                                    m_scratchpad;                         // 18?
		std::int32_t                             m_scratchpadSize;                     // 1C?
	};
}
