#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpVehicleBrake_WheelBreakingOutput.h"

namespace RE
{
	class hkpVehicleBrake :
		public hkReferencedObject  // 00
	{
	public:
		using WheelBreakingOutput = hkpVehicleBrake_WheelBreakingOutput;

	};
}
