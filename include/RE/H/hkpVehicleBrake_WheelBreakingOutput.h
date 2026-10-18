#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkpVehicleBrake_WheelBreakingOutput
	{
	public:
		// members
		std::uint8_t                              pad00[0x8];                      // 00
		hkArray<float, hkContainerHeapAllocator>  m_brakingTorque;                 // 08
		hkArray<hkBool, hkContainerHeapAllocator> m_isFixed;                       // 14?
		float                                     m_wheelsTimeSinceMaxPedalInput;  // 20?
	};
}
