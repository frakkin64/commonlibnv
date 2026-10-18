#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpVehicleDriverInputStatus.h"

namespace RE
{
	class hkpVehicleDriverInputAnalogStatus :
		public hkpVehicleDriverInputStatus  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleDriverInputAnalogStatus };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleDriverInputAnalogStatus };

		// override (hkpVehicleDriverInputStatus)
		virtual ~hkpVehicleDriverInputAnalogStatus() = default;  // 00

		// add
		virtual hkpVehicleDriverInputStatus* clone() const;  // 03

		// members
		float         m_positionX;               // 08?
		float         m_positionY;               // 0C?
		hkBool        m_handbrakeButtonPressed;  // 10?
		hkBool        m_reverseButtonPressed;    // 11?
		std::uint16_t pad12;                     // 12
	};
}
