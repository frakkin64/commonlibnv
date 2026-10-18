#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpVehicleBrake.h"

namespace RE
{
	class hkpVehicleBrake_WheelBreakingOutput;
	class hkpVehicleDriverInput_FilteredDriverInputOutput;
	class hkpVehicleInstance;

	class hkpVehicleDefaultBrake :
		public hkpVehicleBrake  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleDefaultBrake };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleDefaultBrake };

		class WheelBrakingProperties;

		class WheelBrakingProperties
		{
		public:
			// members
			float        m_maxBreakingTorque;       // 00?
			float        m_minPedalInputToBlock;    // 04?
			hkBool       m_isConnectedToHandbrake;  // 08?
			std::uint8_t pad09[0x3];                // 09
		};

		// override (hkpVehicleBrake)
		virtual ~hkpVehicleDefaultBrake() = default;  // 00

		// add
		virtual void calcBreakingInfo(float a_arg1, hkpVehicleInstance const* a_arg2, hkpVehicleDriverInput_FilteredDriverInputOutput const& vehicle, hkpVehicleBrake_WheelBreakingOutput& filteredDriverInfo);  // 03

		// members
		hkArray<hkpVehicleDefaultBrake::WheelBrakingProperties, hkContainerHeapAllocator> m_wheelBrakingProperties;  // 08?
		float                                                                             m_wheelsMinTimeToBlock;    // 14?
	};
}
