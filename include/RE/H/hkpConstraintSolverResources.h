#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConstraintSolverResources_BufferState.h"
#include "RE/H/hkpJacobianSchema.h"

namespace RE
{
	class hkStepInfo;
	class hkpConstraintQueryIn;
	class hkpSolverElemTemp;
	class hkpSolverInfo;
	class hkpVelocityAccumulator;

	class hkpConstraintSolverResources
	{
	public:
		class VelocityAccumTransformBackup;

		class alignas(16) VelocityAccumTransformBackup
		{
		public:
			// members
			hkVector4 m_linear;   // 00?
			hkVector4 m_angular;  // 10?
		};

		// members
		hkStepInfo*                                                 m_stepInfo;               // 00?
		hkpSolverInfo*                                              m_solverInfo;             // 04?
		hkpConstraintQueryIn*                                       m_constraintQueryInput;   // 08?
		hkpVelocityAccumulator*                                     m_accumulators;           // 0C?
		hkpVelocityAccumulator*                                     m_accumulatorsEnd;        // 10?
		hkpVelocityAccumulator*                                     m_accumulatorsCurrent;    // 14?
		hkpConstraintSolverResources::VelocityAccumTransformBackup* m_accumulatorsBackup;     // 18?
		hkpConstraintSolverResources::VelocityAccumTransformBackup* m_accumulatorsBackupEnd;  // 1C?
		hkpConstraintSolverResources_BufferState<hkpJacobianSchema> m_schemas[2];             // 20?
		hkpSolverElemTemp*                                          m_elemTemp;               // 40?
		hkpSolverElemTemp*                                          m_elemTempEnd;            // 44?
		hkpSolverElemTemp*                                          m_elemTempCurrent;        // 48?
		hkpSolverElemTemp*                                          m_elemTempLastProcessed;  // 4C?
	};
}
