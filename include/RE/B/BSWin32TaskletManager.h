#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSemaphore.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTaskletManager.h"

namespace RE
{
	class BSWin32TaskletData;

	class BSWin32TaskletManager :
		public BSTaskletManager  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWin32TaskletManager };
		static constexpr auto VTABLE{ VTABLE::BSWin32TaskletManager };

		// members
		void*                hInitThreadHandle;    // 14
		std::uint32_t        uiThreadMask;         // 18
		std::uint32_t        uiNumThreadsCreated;  // 1C
		void*                hThreadHandles[6];    // 20
		std::uint32_t        dwThreadIDs[6];       // 38
		bool                 bTerminated;          // 50
		std::uint8_t         pad51[0x3];           // 51
		BSSpinLock           QueueLock;            // 54?
		std::uint16_t        usFreeList;           // 5C?
		std::uint16_t        usQueueHead[64];      // 5E?
		std::uint16_t        padDE;                // DE
		std::uint16_t*       pusQueueTail[64];     // E0?
		BSWin32TaskletData*  pQueueHead[64];       // 1E0?
		BSWin32TaskletData** ppQueueTail[64];      // 2E0?
		BSSemaphore          StartSemaphore;       // 3E0?
	};
}
