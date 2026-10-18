#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkWorldOperation_BiggestOperation.h"

namespace RE
{
	class hkpDebugInfoOnPendingOperationQueues
	{
	public:
		// members
		hkArray<hkWorldOperation_BiggestOperation, hkContainerHeapAllocator>* m_pending;                    // 00?
		std::int32_t                                                          m_nextPendingOperationIndex;  // 04?
		hkpDebugInfoOnPendingOperationQueues*                                 m_nextQueue;                  // 08?
		hkpDebugInfoOnPendingOperationQueues*                                 m_prevQueue;                  // 0C?
	};
}
