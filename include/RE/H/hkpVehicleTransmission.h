#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpVehicleTransmission_TransmissionOutput.h"

namespace RE
{
	class hkpVehicleTransmission :
		public hkReferencedObject  // 00
	{
	public:
		using TransmissionOutput = hkpVehicleTransmission_TransmissionOutput;

	};
}
