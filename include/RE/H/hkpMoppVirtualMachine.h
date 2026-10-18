#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpMoppPrimitiveInfo.h"

namespace RE
{
	class hkpMoppVirtualMachine
	{
	public:
		// members
		hkArray<hkpMoppPrimitiveInfo, hkContainerHeapAllocator>* m_primitives_out;  // 00
		std::int32_t                                             padding[3];        // 04
	};
	static_assert(sizeof(hkpMoppVirtualMachine) == 0x10);
}
