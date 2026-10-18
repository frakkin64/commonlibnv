#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class TESGrass_GRASS_WATER_STATE : std::int32_t
	{
		kGWS_ABOVE_ONLY_ATLEAST = 0x0,
		kGWS_ABOVE_ONLY_ATMOST = 0x1,
		kGWS_BELOW_ONLY_ATLEAST = 0x2,
		kGWS_BELOW_ONLY_ATMOST = 0x3,
		kGWS_BOTH_ATLEAST = 0x4,
		kGWS_BOTH_ATMOST = 0x5,
		kGWS_BOTH_ATMOST_ABOVE = 0x6,
		kGWS_BOTH_ATMOST_BELOW = 0x7,
		kGWS_COUNT = 0x8,
	};
}
