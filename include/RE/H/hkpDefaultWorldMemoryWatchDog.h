#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkWorldMemoryAvailableWatchDog.h"

namespace RE
{
	class hkpSimulationIsland;
	class hkpWorld;

	class hkpDefaultWorldMemoryWatchDog :
		public hkWorldMemoryAvailableWatchDog  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDefaultWorldMemoryWatchDog };
		static constexpr auto VTABLE{ VTABLE::hkpDefaultWorldMemoryWatchDog };

		// override (hkWorldMemoryAvailableWatchDog)
		virtual ~hkpDefaultWorldMemoryWatchDog() = default;  // 00

		// add
		virtual std::int32_t getAmountOfFreeHeapMemoryRequested();                                           // 03
		virtual void freeHeapMemoryTillRequestedAmountIsAvailable(hkpWorld* world);                          // 04
		virtual void reduceConstraintsInIsland(hkpSimulationIsland* island, std::int32_t solverBufferSize);  // 05

	protected:
		static void removeObjectsFromIsland(hkpSimulationIsland* island, std::int32_t currentAutoRemoveLevel, std::int32_t freeHeapMemoryRequested, std::int32_t& maxFoundAutoRemoveLevelOut)
		{
			using func_t = decltype(&hkpDefaultWorldMemoryWatchDog::removeObjectsFromIsland);
			static REL::Relocation<func_t> func{ Offsets::hkpDefaultWorldMemoryWatchDog::removeObjectsFromIsland };
			func(island, currentAutoRemoveLevel, freeHeapMemoryRequested, maxFoundAutoRemoveLevelOut);
		}

	public:
		// members
		std::int32_t m_freeHeapMemoryRequested;  // 08
	};
}
