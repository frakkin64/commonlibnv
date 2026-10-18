#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class LOCK_LEVEL : std::int32_t
	{
		kLL_VERYEASY = 0x0,
		kLL_EASY = 0x1,
		kLL_AVERAGE = 0x2,
		kLL_HARD = 0x3,
		kLL_VERYHARD = 0x4,
		kLL_IMPOSSIBLE = 0x5,
		kLL_COUNT = 0x6,
	};
}
