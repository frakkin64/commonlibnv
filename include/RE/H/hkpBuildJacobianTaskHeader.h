#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpBuildJacobianTaskCollection.h"
#include "RE/H/hkpSolveJacobiansTaskCollection.h"

namespace RE
{
	class hkpConstraintQueryIn;
	class hkpEntity;
	class hkpImpulseLimitBreachedHeader;
	class hkpJacobianSchema;
	class hkpSimulationIsland;
	class hkpSolverElemTemp;
	class hkpVelocityAccumulator;

	class hkpBuildJacobianTaskHeader
	{
	public:
		// members
		std::int32_t                                            m_openJobs;                        // 00?
		std::int32_t                                            m_numUnfinishedJobsForBroadphase;  // 04?
		std::int32_t                                            m_islandShouldBeDeactivated;       // 08?
		std::int32_t                                            m_referenceCount;                  // 0C?
		std::int32_t                                            m_numIslandsAfterSplit;            // 10?
		void*                                                   m_buffer;                          // 14?
		std::int32_t                                            m_bufferSize;                      // 18?
		std::int32_t                                            m_bufferCapacity;                  // 1C?
		char                                                    m_exportFinished;                  // 20?
		char                                                    m_splitCheckRequested;             // 21?
		std::uint16_t                                           pad22;                             // 22
		hkpImpulseLimitBreachedHeader*                          m_impulseLimitsBreached;           // 24?
		hkpVelocityAccumulator*                                 m_accumulatorsBase;                // 28?
		hkpVelocityAccumulator*                                 m_accumulatorsEnd;                 // 2C?
		std::uint16_t                                           m_numApplyGravityJobs;             // 30?
		std::uint16_t                                           m_numIntegrateVelocitiesJobs;      // 32?
		hkpJacobianSchema*                                      m_schemasBase;                     // 34?
		hkpSolverElemTemp*                                      m_solverTempBase;                  // 38?
		std::int32_t                                            m_numSolverResults;                // 3C?
		std::int32_t                                            m_numSolverElemTemps;              // 40?
		const hkpConstraintQueryIn*                             m_constraintQueryIn;               // 44?
		hkpEntity* const*                                       m_allEntities;                     // 48?
		std::uint16_t                                           m_numAllEntities;                  // 4C?
		std::uint16_t                                           m_entitiesCapacity;                // 4E?
		hkBool                                                  m_solveInSingleThread;             // 50?
		hkBool                                                  m_solveInSingleThreadOnPpuOnly;    // 51?
		std::uint16_t                                           pad52;                             // 52
		hkArray<hkpSimulationIsland*, hkContainerHeapAllocator> m_newSplitIslands;                 // 54?
		hkpBuildJacobianTaskCollection                          m_tasks;                           // 60?
		hkpSolveJacobiansTaskCollection                         m_solveTasks;                      // 70?
	};
}
