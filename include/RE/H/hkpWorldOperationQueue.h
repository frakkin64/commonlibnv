#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkWorldOperation_BiggestOperation.h"
#include "RE/H/hkpBodyOperationEntry.h"

namespace RE
{
	class hkWorldOperation_BaseOperation;
	class hkpWorld;

	class hkpWorldOperationQueue
	{
	public:
		void queueOperation(hkWorldOperation_BaseOperation const& operation)
		{
			using func_t = decltype(&hkpWorldOperationQueue::queueOperation);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldOperationQueue::queueOperation };
			func(this, operation);
		}

		void executeAllPendingBodyOperations()
		{
			using func_t = decltype(&hkpWorldOperationQueue::executeAllPendingBodyOperations);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldOperationQueue::executeAllPendingBodyOperations };
			func(this);
		}

	public:
		// members
		hkArray<hkWorldOperation_BiggestOperation, hkContainerHeapAllocator> m_pending;                // 00?
		hkpWorld*                                                            m_world;                  // 0C?
		hkArray<hkWorldOperation_BiggestOperation, hkContainerHeapAllocator> m_islandMerges;           // 10?
		hkArray<hkpBodyOperationEntry, hkContainerHeapAllocator>             m_pendingBodyOperations;  // 1C?
	};
}
