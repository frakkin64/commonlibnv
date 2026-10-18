#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpBroadPhaseHandlePair.h"
#include "RE/H/hkpNullBroadPhaseListener.h"

namespace RE
{
	class hkpBroadPhaseListener;
	class hkpTypedBroadPhaseHandlePair;

	class hkpTypedBroadPhaseDispatcher
	{
	public:
		void removePairs(hkpTypedBroadPhaseHandlePair* deletedPairs, std::int32_t numDeletedPairs) const
		{
			using func_t = decltype(&hkpTypedBroadPhaseDispatcher::removePairs);
			static REL::Relocation<func_t> func{ Offsets::hkpTypedBroadPhaseDispatcher::removePairs };
			func(this, deletedPairs, numDeletedPairs);
		}

		static void removeDuplicates(hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>& newPairs, hkArray<hkpBroadPhaseHandlePair, hkContainerHeapAllocator>& delPairs)
		{
			using func_t = decltype(&hkpTypedBroadPhaseDispatcher::removeDuplicates);
			static REL::Relocation<func_t> func{ Offsets::hkpTypedBroadPhaseDispatcher::removeDuplicates };
			func(newPairs, delPairs);
		}

	public:
		// members
		hkpBroadPhaseListener*    m_broadPhaseListeners[8][8];  // 00?
		hkpNullBroadPhaseListener m_nullBroadPhaseListener;     // 100?
	};
}
