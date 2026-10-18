#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkpVehicleTransmission_TransmissionOutput
	{
	public:
		// members
		float  m_transmissionRPM;             // 00?
		float  m_mainTransmittedTorque;       // 04?
		float* m_wheelsTransmittedTorque;     // 08?
		char   m_numWheelsTramsmittedTorque;  // 0C?
		hkBool m_isReversing;                 // 0D?
		char   m_currentGear;                 // 0E?
		hkBool m_delayed;                     // 0F?
		float  m_clutchDelayCountdown;        // 10?
	};
}
