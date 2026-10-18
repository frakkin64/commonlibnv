#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpVehicleSteering.h"

namespace RE
{
	class hkpVehicleDriverInput_FilteredDriverInputOutput;
	class hkpVehicleInstance;
	class hkpVehicleSteering_SteeringAnglesOutput;

	class hkpVehicleDefaultSteering :
		public hkpVehicleSteering  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleDefaultSteering };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleDefaultSteering };

		// override (hkpVehicleSteering)
		virtual ~hkpVehicleDefaultSteering() = default;  // 00

		// add
		virtual void calcSteering(float a_arg1, hkpVehicleInstance const* a_arg2, hkpVehicleDriverInput_FilteredDriverInputOutput const& vehicle, hkpVehicleSteering_SteeringAnglesOutput& filteredInfoOutput);           // 03
		virtual void calcMainSteeringAngle(float a_arg1, hkpVehicleInstance const* a_arg2, hkpVehicleDriverInput_FilteredDriverInputOutput const& vehicle, hkpVehicleSteering_SteeringAnglesOutput& filteredInfoOutput);  // 04

		// members
		float                                     m_maxSteeringAngle;           // 08?
		float                                     m_maxSpeedFullSteeringAngle;  // 0C?
		hkArray<hkBool, hkContainerHeapAllocator> m_doesWheelSteer;             // 10?
	};
}
