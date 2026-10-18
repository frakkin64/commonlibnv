#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpVehicleSuspension.h"

namespace RE
{
	class hkpVehicleInstance;
	class hkpVehicleWheelCollide_CollisionDetectionWheelOutput;

	class hkpVehicleDefaultSuspension :
		public hkpVehicleSuspension  // 00
	{
	public:
		class WheelSpringSuspensionParameters;

		class WheelSpringSuspensionParameters
		{
		public:
			// members
			float m_strength;            // 00?
			float m_dampingCompression;  // 04?
			float m_dampingRelaxation;   // 08?
		};

		// override (hkpVehicleSuspension)
		virtual ~hkpVehicleDefaultSuspension() = default;  // 00

		// add
		virtual void calcSuspension(float a_arg1, hkpVehicleInstance const* a_arg2, hkpVehicleWheelCollide_CollisionDetectionWheelOutput const* vehicle, float* cdInfo);  // 03

		// members
		hkArray<hkpVehicleDefaultSuspension::WheelSpringSuspensionParameters, hkContainerHeapAllocator> m_wheelSpringParams;  // 14?
	};
}
