#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkaPose
	{
	public:
		// members
		// not placed: m_skeleton, m_localPose, m_modelPose, m_boneFlags, m_modelInSync, m_localInSync
		std::uint8_t                             pad00[0x10];        // 00
		hkArray<float, hkContainerHeapAllocator> m_floatSlotValues;  // 10
	};
}
