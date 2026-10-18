#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"
#include "RE/H/hkMultiThreadCheck.h"
#include "RE/H/hkpAgentNnTrack.h"
#include "RE/H/hkpConstraintOwner.h"

namespace RE
{
	class hkpAction;
	class hkpConstraintInstance;
	class hkpEntity;
	class hkpWorld;

	class hkpSimulationIsland :
		public hkpConstraintOwner  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimulationIsland };
		static constexpr auto VTABLE{ VTABLE::hkpSimulationIsland };

		// override (hkpConstraintOwner)
		virtual ~hkpSimulationIsland() = default;                                                           // 00
		virtual void addConstraintToCriticalLockedIsland(hkpConstraintInstance* constraint) override;       // 03
		virtual void removeConstraintFromCriticalLockedIsland(hkpConstraintInstance* constraint) override;  // 04
		virtual void addCallbackRequest(hkpConstraintInstance* constraint, std::int32_t request) override;  // 05

		bool isFullyConnected()
		{
			using func_t = decltype(&hkpSimulationIsland::isFullyConnected);
			static REL::Relocation<func_t> func{ Offsets::hkpSimulationIsland::isFullyConnected };
			return func(this);
		}

	protected:
		hkpSimulationIsland* ctor(hkpWorld* world)
		{
			using func_t = hkpSimulationIsland*(__thiscall*)(hkpSimulationIsland*, hkpWorld*);
			static REL::Relocation<func_t> func{ Offsets::hkpSimulationIsland::ctor };
			return func(this, world);
		}

	public:
		// members
		// not placed: m_allowIslandLocking(misaligned), m_actionListCleanupNeeded(misaligned), m_sparseEnabled(misaligned), m_splitCheckRequested(misaligned), m_inIntegrateJob(misaligned), m_tryToIncreaseIslandSizeMark(misaligned), m_activeMark(misaligned), m_isInActiveIslandsArray(misaligned)
		hkpWorld*                                               m_world;                            // 18
		std::int32_t                                            m_numConstraints;                   // 1C
		std::uint16_t                                           m_storageIndex;                     // 20
		std::uint16_t                                           m_dirtyListIndex;                   // 22
		std::uint8_t                                            m_splitCheckFrameCounter;           // 24
		std::uint8_t                                            pad25[0x3];                         // 25
		hkMultiThreadCheck                                      m_multiThreadCheck;                 // 28
		float                                                   m_timeSinceLastHighFrequencyCheck;  // 30
		float                                                   m_timeSinceLastLowFrequencyCheck;   // 34
		hkArray<hkpAction*, hkContainerHeapAllocator>           m_actions;                          // 38
		float                                                   m_timeOfDeactivation;               // 44
		hkInplaceArray<hkpEntity*, 1, hkContainerHeapAllocator> m_entities;                         // 48
		hkpAgentNnTrack                                         m_agentTrack;                       // 58?
	};
}
