#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpVehicleTransmission.h"

namespace RE
{
	class hkBool;
	class hkpVehicleInstance;
	class hkpVehicleTransmission_TransmissionOutput;

	class hkpVehicleDefaultTransmission :
		public hkpVehicleTransmission  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpVehicleDefaultTransmission };
		static constexpr auto VTABLE{ VTABLE::hkpVehicleDefaultTransmission };

		// override (hkpVehicleTransmission)
		virtual ~hkpVehicleDefaultTransmission() = default;  // 00

		// add
		virtual void calcTransmission(float a_arg1, hkpVehicleInstance const* a_arg2, hkpVehicleTransmission_TransmissionOutput& vehicle);               // 03
		virtual float calcMainTransmittedTorque(const hkpVehicleInstance* a_arg1, hkpVehicleTransmission_TransmissionOutput* a_arg2) const;              // 04
		virtual float calcTransmissionRPM(const hkpVehicleInstance* a_arg1, hkpVehicleTransmission_TransmissionOutput* a_arg2);                          // 05
		virtual hkBool* calcIsReversing(hkBool* a_arg1, const hkpVehicleInstance* a_arg2, hkpVehicleTransmission_TransmissionOutput* a_arg3) const;      // 06
		virtual void updateCurrentGear(float deltaTime, hkpVehicleInstance const* vehicle, hkpVehicleTransmission_TransmissionOutput& transmissionOut);  // 07
		virtual float getCurrentRatio(const hkpVehicleInstance* a_arg1, hkpVehicleTransmission_TransmissionOutput* a_arg2) const;                        // 08

		// members
		float                                    m_downshiftRPM;              // 08
		float                                    m_upshiftRPM;                // 0C
		float                                    m_primaryTransmissionRatio;  // 10
		float                                    m_clutchDelayTime;           // 14
		float                                    m_reverseGearRatio;          // 18?
		hkArray<float, hkContainerHeapAllocator> m_gearsRatio;                // 1C?
		hkArray<float, hkContainerHeapAllocator> m_wheelsTorqueRatio;         // 28?
	};
}
