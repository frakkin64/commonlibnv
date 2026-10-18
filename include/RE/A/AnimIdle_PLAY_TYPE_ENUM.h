#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class AnimIdle_PLAY_TYPE_ENUM : std::int32_t
	{
		kPLAY_TYPE_REPLACE = 0x0,
		kPLAY_TYPE_QUEUE = 0x1,
		kPLAY_TYPE_AUTO = 0x2,
		kPLAY_TYPE_AUTO_EXCLUSIVE = 0x3,
	};
}
