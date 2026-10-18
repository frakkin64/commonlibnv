#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpVehicleSuspension_SuspensionWheelParameters.h"

namespace RE
{
	class hkpVehicleSuspension :
		public hkReferencedObject  // 00
	{
	public:
		using SuspensionWheelParameters = hkpVehicleSuspension_SuspensionWheelParameters;

		// members
		hkArray<hkpVehicleSuspension_SuspensionWheelParameters, hkContainerHeapAllocator> m_wheelParams;  // 08?
	};
}
