#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpVehicleDriverInput.h"

namespace RE
{
	class hkpVehicleDriverInputStatus;
	class hkpVehicleDriverInput_FilteredDriverInputOutput;
	class hkpVehicleInstance;

	class hkpVehicleDefaultAnalogDriverInput :
		public hkpVehicleDriverInput  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleDefaultAnalogDriverInput };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleDefaultAnalogDriverInput };

		// override (hkpVehicleDriverInput)
		virtual ~hkpVehicleDefaultAnalogDriverInput() = default;  // 00

		// add
		virtual void calcDriverInput(float a_arg1, hkpVehicleInstance const* a_arg2, hkpVehicleDriverInputStatus const* vehicle, hkpVehicleDriverInput_FilteredDriverInputOutput& deviceStatus);  // 03

		// members
		float        m_slopeChangePointX;  // 08?
		float        m_initialSlope;       // 0C?
		float        m_deadZone;           // 10?
		hkBool       m_autoReverse;        // 14?
		std::uint8_t pad15[0x3];           // 15
	};
}
