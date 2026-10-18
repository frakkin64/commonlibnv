#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ANIM_GROUP_MOVE_ENUM : std::int32_t
	{
		kAGM_NONE = 0x0,
		kAGM_WALK = 0x0,
		kAGM_SNEAK = 0x1,
		kAGM_SWIM = 0x2,
		kAGM_FLY = 0x3,
		kANIM_GROUP_MOVE_COUNT = 0x4,
	};
}
