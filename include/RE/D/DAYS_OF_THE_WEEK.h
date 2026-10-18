#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class DAYS_OF_THE_WEEK : std::int32_t
	{
		kDAY_NONE = -1,
		kDAY_SUNDAY = 0x0,
		kDAY_MONDAY = 0x1,
		kDAY_TUESDAY = 0x2,
		kDAY_WEDNESDAY = 0x3,
		kDAY_THURSDAY = 0x4,
		kDAY_FRIDAY = 0x5,
		kDAY_SATURDAY = 0x6,
		kDAY_COUNT = 0x7,
	};
}
