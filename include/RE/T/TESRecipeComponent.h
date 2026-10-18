#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESForm;

	class TESRecipeComponent
	{
	public:
		// members
		std::uint32_t Quantity;       // 00
		TESForm*      pInternalItem;  // 04
	};
	static_assert(sizeof(TESRecipeComponent) == 0x8);
}
