#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkpBroadPhaseHandlePair.h"
#include "RE/H/hkpSimulation.h"
#include "RE/H/hkpStepResult.h"
#include "RE/H/hkpToiEvent.h"

namespace RE
{
	class hkpAgentNnEntry;
	class hkpEntity;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;
	class hkpSimulationIsland;
	class hkpToiResourceMgr;
	class hkpWorld;

	class hkpContinuousSimulation :
		public hkpSimulation  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpContinuousSimulation };
		static constexpr auto VTABLE{ VTABLE::hkpContinuousSimulation };

		// override (hkpSimulation)
		virtual ~hkpContinuousSimulation() = default;  // 00

		void collideEntitiesBroadPhaseContinuousFindPairs(hkpEntity** entities, std::int32_t numEntities, hkpWorld* world, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>& newPairs, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>& delPairs)
		{
			using func_t = decltype(&hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs);
			static REL::Relocation<func_t> func{ Offsets::hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs };
			func(this, entities, numEntities, world, newPairs, delPairs);
		}

		hkpContinuousSimulation* ctor(hkpWorld* world)
		{
			using func_t = hkpContinuousSimulation*(__thiscall*)(hkpContinuousSimulation*, hkpWorld*);
			static REL::Relocation<func_t> func{ Offsets::hkpContinuousSimulation::ctor };
			return func(this, world);
		}

		void addToiEvent(hkpProcessCollisionOutput const& processOutput, hkpAgentNnEntry const& entry)
		{
			using func_t = decltype(&hkpContinuousSimulation::addToiEvent);
			static REL::Relocation<func_t> func{ Offsets::hkpContinuousSimulation::addToiEvent };
			func(this, processOutput, entry);
		}

		void collideEntitiesBroadPhaseContinuous(hkpEntity** entities, std::int32_t numEntities, hkpWorld* world, std::int8_t* exportFinished)
		{
			using func_t = decltype(&hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous);
			static REL::Relocation<func_t> func{ Offsets::hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous };
			func(this, entities, numEntities, world, exportFinished);
		}

		void collideIslandNarrowPhaseContinuous(hkpSimulationIsland* isle, hkpProcessCollisionInput const& input)
		{
			using func_t = decltype(&hkpContinuousSimulation::collideIslandNarrowPhaseContinuous);
			static REL::Relocation<func_t> func{ Offsets::hkpContinuousSimulation::collideIslandNarrowPhaseContinuous };
			func(this, isle, input);
		}

	protected:
		void handleSimpleToi(hkpWorld* world, hkpToiEvent& event, float a_arg3, float physicsDeltaTime)
		{
			using func_t = decltype(&hkpContinuousSimulation::handleSimpleToi);
			static REL::Relocation<func_t> func{ Offsets::hkpContinuousSimulation::handleSimpleToi };
			func(this, world, event, a_arg3, physicsDeltaTime);
		}

		hkpStepResult advanceTimeInternal()
		{
			using func_t = decltype(&hkpContinuousSimulation::advanceTimeInternal);
			static REL::Relocation<func_t> func{ Offsets::hkpContinuousSimulation::advanceTimeInternal };
			return func(this);
		}

	public:
		// members
		std::uint32_t                                                     pad2C;                                   // 2C
		hkArray<hkpToiEvent, hkContainerHeapAllocator>                    m_toiEvents;                             // 30
		hkPointerMap<std::uint32_t, hkpEntity*, hkContainerHeapAllocator> m_entitiesNeedingPsiCollisionDetection;  // 3C?
		hkpToiResourceMgr*                                                m_toiResourceMgr;                        // 48?
		std::int32_t                                                      m_toiCounter;                            // 4C?
	};
}
