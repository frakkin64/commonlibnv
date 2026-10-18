#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpVehicleVelocityDamper :
		public hkReferencedObject  // 00
	{
	public:
		// members
		std::uint8_t pad08[0x8];  // 08
	};
	static_assert(sizeof(hkpVehicleVelocityDamper) == 0x10);
}
