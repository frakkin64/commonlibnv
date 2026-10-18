#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpVehicleSteering_SteeringAnglesOutput.h"

namespace RE
{
	class hkpVehicleSteering :
		public hkReferencedObject  // 00
	{
	public:
		using SteeringAnglesOutput = hkpVehicleSteering_SteeringAnglesOutput;

	};
}
