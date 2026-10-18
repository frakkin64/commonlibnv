#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class IngredientItemData
	{
	public:
		// members
		std::int32_t iCostOverride;  // 00
		std::uint8_t iFlags;         // 04
		std::uint8_t pad05[0x3];     // 05
	};
}
