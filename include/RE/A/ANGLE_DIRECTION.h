#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ANGLE_DIRECTION : std::int32_t
	{
		kAD_NONE = -1,
		kAD_CCW = 0x0,
		kAD_CW = 0x1,
		kAD_COUNT = 0x2,
	};
}
