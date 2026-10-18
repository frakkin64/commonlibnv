#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkCriticalSection.h"
#include "RE/H/hkJobQueue_JobStatus.h"
#include "RE/H/hkpContinuousSimulation.h"
#include "RE/H/hkpMultiThreadedSimulation_MtBroadPhaseBorderListener.h"
#include "RE/H/hkpMultiThreadedSimulation_MtEntityEntityBroadPhaseListener.h"
#include "RE/H/hkpMultiThreadedSimulation_MtPhantomBroadPhaseListener.h"
#include "RE/H/hkpMultithreadConfig.h"
#include "RE/H/hkpStepResult.h"
#include "RE/H/hkpTypedBroadPhaseHandlePair.h"

namespace RE
{
	class hkJobQueue;
	class hkJobQueue_JobQueueEntry;
	class hkJobThreadPool;
	class hkpAgentNnEntry;
	class hkpIslandsAgentEntriesInfo;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;
	class hkpWorld;

	class hkpMultiThreadedSimulation :
		public hkpContinuousSimulation  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMultiThreadedSimulation };
		static constexpr auto VTABLE{ VTABLE::hkpMultiThreadedSimulation };

		using MtBroadPhaseBorderListener = hkpMultiThreadedSimulation_MtBroadPhaseBorderListener;
		using MtEntityEntityBroadPhaseListener = hkpMultiThreadedSimulation_MtEntityEntityBroadPhaseListener;
		using MtPhantomBroadPhaseListener = hkpMultiThreadedSimulation_MtPhantomBroadPhaseListener;

		// override (hkpContinuousSimulation)
		virtual ~hkpMultiThreadedSimulation() = default;  // 00

		static hkJobQueue_JobStatus processNextJob(hkJobQueue& jobQueue, hkJobQueue_JobQueueEntry& job)
		{
			using func_t = decltype(&hkpMultiThreadedSimulation::processNextJob);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiThreadedSimulation::processNextJob };
			return func(jobQueue, job);
		}

		hkpStepResult stepBeginSt(hkJobQueue* jobQueue, float physicsDeltaTime)
		{
			using func_t = decltype(&hkpMultiThreadedSimulation::stepBeginSt);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiThreadedSimulation::stepBeginSt };
			return func(this, jobQueue, physicsDeltaTime);
		}

		void processAgentNnEntriesFromMultipleIslands(hkpAgentNnEntry** allEntries, std::int32_t numAllEntries, hkpIslandsAgentEntriesInfo* islandEntriesInfos, std::int32_t numInfos, hkpProcessCollisionInput const& collisionInput, hkBool forceManifoldQualityType)
		{
			using func_t = decltype(&hkpMultiThreadedSimulation::processAgentNnEntriesFromMultipleIslands);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiThreadedSimulation::processAgentNnEntriesFromMultipleIslands };
			func(this, allEntries, numAllEntries, islandEntriesInfos, numInfos, collisionInput, forceManifoldQualityType);
		}

		hkpMultiThreadedSimulation* ctor(hkpWorld* world)
		{
			using func_t = hkpMultiThreadedSimulation*(__thiscall*)(hkpMultiThreadedSimulation*, hkpWorld*);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiThreadedSimulation::ctor };
			return func(this, world);
		}

		void addToiEventWithCriticalSectionLock(hkpProcessCollisionOutput const& processOutput, hkpAgentNnEntry const& entry, hkCriticalSection* criticalSection)
		{
			using func_t = decltype(&hkpMultiThreadedSimulation::addToiEventWithCriticalSectionLock);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiThreadedSimulation::addToiEventWithCriticalSectionLock };
			func(this, processOutput, entry, criticalSection);
		}

		hkpStepResult finishMtStep(hkJobQueue* jobQueue, hkJobThreadPool* threadPool)
		{
			using func_t = decltype(&hkpMultiThreadedSimulation::finishMtStep);
			static REL::Relocation<func_t> func{ Offsets::hkpMultiThreadedSimulation::finishMtStep };
			return func(this, jobQueue, threadPool);
		}

	public:
		// members
		hkpMultiThreadedSimulation_MtEntityEntityBroadPhaseListener     m_entityEntityBroadPhaseListener;        // 50?
		hkpMultiThreadedSimulation_MtPhantomBroadPhaseListener          m_phantomBroadPhaseListener;             // 58?
		hkpMultiThreadedSimulation_MtBroadPhaseBorderListener           m_broadPhaseBorderListener;              // 60?
		hkBool                                                          m_crossIslandPairsCollectingActive;      // 68?
		std::uint8_t                                                    pad69[0x3];                              // 69
		hkArray<hkpTypedBroadPhaseHandlePair, hkContainerHeapAllocator> m_addedCrossIslandPairs;                 // 6C?
		hkCriticalSection                                               m_addCrossIslandPairCriticalSection;     // 78?
		hkArray<hkpTypedBroadPhaseHandlePair, hkContainerHeapAllocator> m_removedCrossIslandPairs;               // 94?
		hkCriticalSection                                               m_removeCrossIslandPairCriticalSection;  // A0?
		hkpMultithreadConfig                                            m_multithreadConfig;                     // BC?
		std::int32_t                                                    m_numActiveIslandsAtBeginningOfStep;     // C0?
		std::int32_t                                                    m_numInactiveIslandsAtBeginningOfStep;   // C4?
		hkJobQueue*                                                     m_jobQueueHandleForToiSolve;             // C8?
		hkCriticalSection                                               m_toiQueueCriticalSection;               // CC?
		hkCriticalSection                                               m_phantomCriticalSection;                // E8?
	};
}
