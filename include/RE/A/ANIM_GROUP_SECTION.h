#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ANIM_GROUP_SECTION : std::int32_t
	{
		kAGS_NONE = -1,
		kAGS_IDLE = 0x0,
		kAGS_MOVEMENT = 0x1,
		kAGS_LEFT_ARM = 0x2,
		kAGS_TALKING = 0x3,
		kAGS_WEAPON = 0x4,
		kAGS_WEAPON_UP = 0x5,
		kAGS_WEAPON_DOWN = 0x6,
		kAGS_SPECIAL_IDLE = 0x7,
		kANIM_GROUP_SECTION_COUNT = 0x8,
		kAGS_WHOLE_BODY = 0x14,
		kAGS_UPPER_BODY = 0x15,
		kANIM_GROUP_SECTION_TOTAL_COUNT = 0x16,
		kAGS_SKIP_ALL_BUT_SPECIAL_IDLE = 0x17,
	};
}
