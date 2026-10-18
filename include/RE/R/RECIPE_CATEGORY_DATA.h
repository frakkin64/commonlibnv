#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class RECIPE_CATEGORY_DATA
	{
	public:
		// members
		std::uint8_t flags;  // 00
	};
	static_assert(sizeof(RECIPE_CATEGORY_DATA) == 0x1);
}
