#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkpBuildJacobianTaskHeader;
	class hkpJacobianSchema;
	class hkpSolverElemTemp;
	class hkpVelocityAccumulator;

	class hkpSolveConstraintBatchTask
	{
	public:
		// members
		hkpSolveConstraintBatchTask* m_next;                        // 00?
		hkpBuildJacobianTaskHeader*  m_taskHeader;                  // 04?
		hkpVelocityAccumulator*      m_accumulators;                // 08?
		const hkpJacobianSchema*     m_schemas;                     // 0C?
		hkpSolverElemTemp*           m_solverElemTemp;              // 10?
		std::int32_t                 m_sizeOfSchemaBuffer;          // 14?
		std::int32_t                 m_sizeOfSolverElemTempBuffer;  // 18?
		hkBool                       m_isLastTaskInBatch;           // 1C?
		std::uint8_t                 pad1D;                         // 1D
		std::uint16_t                m_sizeOfNextBatch;             // 1E?
		hkpSolveConstraintBatchTask* m_firstTaskInNextBatch;        // 20?
	};
}
