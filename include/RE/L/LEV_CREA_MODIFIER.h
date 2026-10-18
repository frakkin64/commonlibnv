#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class LEV_CREA_MODIFIER : std::int32_t
	{
		kLCM_EASY = 0x0,
		kLCM_MEDIUM = 0x1,
		kLCM_HARD = 0x2,
		kLCM_BOSS = 0x3,
		kLCM_NONE = 0x4,
		kLCM_COUNT = 0x5,
	};
}
