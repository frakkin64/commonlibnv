#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkWorldObjectCinfo.h"
#include "RE/H/hkpMaterial_ResponseType.h"

namespace RE
{
	class hkEntityCinfo :
		public hkWorldObjectCinfo  // 00
	{
	public:
		// members
		hkEnum<hkpMaterial_ResponseType, std::int8_t> m_collisionResponse;            // 18?
		std::uint8_t                                  pad19;                          // 19
		std::uint16_t                                 m_processContactCallbackDelay;  // 1A?
	};
}
