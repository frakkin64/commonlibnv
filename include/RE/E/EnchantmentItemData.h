#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MagicSystem_CastingType.h"

namespace RE
{
	class EnchantmentItemData
	{
	public:
		// members
		MagicSystem_CastingType eCastingType;     // 00
		std::int32_t            iChargeOverride;  // 04
		std::int32_t            iCostOverride;    // 08
		std::uint8_t            iFlags;           // 0C
		std::uint8_t            pad0D[0x3];       // 0D
	};
}
