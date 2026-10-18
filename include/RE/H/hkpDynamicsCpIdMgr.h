#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"

namespace RE
{
	class hkpDynamicsCpIdMgr
	{
	public:
		// members
		hkInplaceArray<std::uint8_t, 8, hkContainerHeapAllocator> m_values;  // 00?
	};
}
