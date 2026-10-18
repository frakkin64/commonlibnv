#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpVehicleManager.h"

namespace RE
{
	class hkpVehicleCastBatchingManager :
		public hkpVehicleManager  // 00
	{
	public:
		// members
		std::uint16_t m_totalNumWheels;  // 14
		std::uint16_t pad16;             // 16
	};
}
