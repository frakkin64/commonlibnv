#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkaDetectRagdollPenetration_BonePenetration.h"

namespace RE
{
	class hkaDetectRagdollPenetration_Output
	{
	public:
		// members
		hkArray<hkaDetectRagdollPenetration_BonePenetration, hkContainerHeapAllocator> m_penetrations;  // 00?
	};
}
