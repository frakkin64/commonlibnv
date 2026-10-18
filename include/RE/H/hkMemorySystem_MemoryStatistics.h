#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMemorySystem_MemoryStatistics
	{
	public:
		// members
		std::uint32_t m_sizeStackAllocatedFromHeap;  // 00?
		std::uint32_t m_sumBytesInThreadMemory;      // 04?
		std::uint32_t m_solverAllocatedFromHeap;     // 08?
	};
}
