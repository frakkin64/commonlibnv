#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpVehicleAerodynamics_AerodynamicsDragOutput.h"

namespace RE
{
	class hkpVehicleAerodynamics :
		public hkReferencedObject  // 00
	{
	public:
		using AerodynamicsDragOutput = hkpVehicleAerodynamics_AerodynamicsDragOutput;

	};
}
