#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class RAYCAST_REQUEST_TYPE : std::int32_t
	{
		kRCRT_START = 0x0,
		kRCRT_GOAL = 0x1,
		kRCRT_NOMESH = 0x2,
	};
}
