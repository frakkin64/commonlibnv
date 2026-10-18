#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpSolveConstraintBatchTask;

	class hkpSolveJacobiansTaskCollection
	{
	public:
		// members
		hkpSolveConstraintBatchTask* m_firstSolveJacobiansTask;  // 00?
		std::uint16_t                m_firstBatchSize;           // 04?
		std::uint16_t                pad06;                      // 06
	};
}
