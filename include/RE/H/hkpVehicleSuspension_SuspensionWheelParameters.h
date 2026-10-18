#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpVehicleSuspension_SuspensionWheelParameters
	{
	public:
		// members
		hkVector4    m_hardpointChassisSpace;  // 00?
		hkVector4    m_directionChassisSpace;  // 10?
		float        m_length;                 // 20?
		std::uint8_t pad24[0xC];               // 24
	};
}
