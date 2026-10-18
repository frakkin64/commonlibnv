#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class HeapStats
	{
	public:
		// members
		const char*   pHeapName;              // 00?
		std::uint32_t MemHeapSize;            // 04?
		std::uint32_t MemHeapCommitted;       // 08?
		std::int32_t  iMemAllocatedToBlocks;  // 0C?
		std::int32_t  iNumBlocks;             // 10?
		std::int32_t  iNumFreeBlocks;         // 14?
		std::int32_t  iMemFreeInBlocks;       // 18?
		std::int32_t  iMemUsedInBlocks;       // 1C?
		std::int32_t  iSmallestFreeBlock;     // 20?
		std::int32_t  iLargestFreeBlock;      // 24?
		std::int32_t  iHeapOverhead;          // 28?
		std::int32_t  iFreeListOverhead;      // 2C?
		std::int32_t  iBlockOverhead;         // 30?
		std::int32_t  iMemDebugOverhead;      // 34?
		std::uint32_t iTotalFree;             // 38?
	};
}
