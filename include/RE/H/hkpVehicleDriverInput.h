#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpVehicleDriverInput_FilteredDriverInputOutput.h"

namespace RE
{
	class hkpVehicleDriverInput :
		public hkReferencedObject  // 00
	{
	public:
		using FilteredDriverInputOutput = hkpVehicleDriverInput_FilteredDriverInputOutput;

	};
}
