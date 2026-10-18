#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkpAgent1nSector;

	class hkpAgent1nTrack
	{
	public:
		// members
		hkArray<hkpAgent1nSector*, hkContainerHeapAllocator> m_sectors;  // 00?
	};
}
