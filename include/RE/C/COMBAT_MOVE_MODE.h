#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class COMBAT_MOVE_MODE : std::int32_t
	{
		kCOMBAT_MOVE_MODE_WALK = 0x0,
		kCOMBAT_MOVE_MODE_FAST_WALK = 0x1,
		kCOMBAT_MOVE_MODE_SNEAK = 0x2,
		kCOMBAT_MOVE_MODE_RUN = 0x3,
		kCOMBAT_MOVE_MODE_SLOW_RUN = 0x4,
		kCOMBAT_MOVE_MODE_COUNT = 0x5,
	};
}
