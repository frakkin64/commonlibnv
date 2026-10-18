#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkMap.h"
#include "RE/H/hkMapOperations.h"
#include "RE/H/hkpSaveContactPointsUtil_EntitySelector.h"

namespace RE
{
	class hkEntitySelectorListed :
		public hkpSaveContactPointsUtil_EntitySelector  // 00
	{
	public:
		// members
		hkMap<std::uint32_t, std::uint32_t, hkMapOperations<std::uint32_t>, hkContainerHeapAllocator> m_map;  // 04?
	};
}
