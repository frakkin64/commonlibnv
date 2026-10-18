#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMemoryAllocator_MemoryStatistics
	{
	public:
		// members
		std::uint32_t m_allocated;       // 00
		std::uint32_t m_inUse;           // 04?
		std::uint32_t m_peakInUse;       // 08?
		std::uint32_t m_available;       // 0C?
		std::uint32_t m_totalAvailable;  // 10?
		std::uint32_t m_largestBlock;    // 14?
	};
}
