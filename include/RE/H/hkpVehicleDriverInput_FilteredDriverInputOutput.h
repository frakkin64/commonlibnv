#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkpVehicleDriverInput_FilteredDriverInputOutput
	{
	public:
		// members
		float         m_acceleratorPedalInput;  // 00?
		float         m_brakePedalInput;        // 04?
		float         m_steeringWheelInput;     // 08?
		hkBool        m_handbrakeOn;            // 0C?
		hkBool        m_tryingToReverse;        // 0D?
		std::uint16_t pad0E;                    // 0E
	};
}
