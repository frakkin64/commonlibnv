#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkpVehicleSteering_SteeringAnglesOutput
	{
	public:
		// members
		float                                    m_mainSteeringAngle;    // 00?
		hkArray<float, hkContainerHeapAllocator> m_wheelsSteeringAngle;  // 04?
	};
}
