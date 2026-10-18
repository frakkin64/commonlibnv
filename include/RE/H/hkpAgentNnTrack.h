#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"

namespace RE
{
	class hkpAgentNnSector;

	class hkpAgentNnTrack
	{
	public:
		// members
		std::uint32_t                                                  m_bytesUsedInLastSector;  // 00?
		hkInplaceArray<hkpAgentNnSector*, 1, hkContainerHeapAllocator> m_sectors;                // 04?
	};
}
