#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkMemoryTrack
	{
	public:
		// members
		std::int32_t                                     m_numBytesPerSector;   // 00?
		std::int32_t                                     m_numBytesLastSector;  // 04?
		hkArray<std::uint8_t*, hkContainerHeapAllocator> m_sectors;             // 08?
	};
}
