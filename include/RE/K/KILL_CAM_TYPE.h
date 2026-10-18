#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class KILL_CAM_TYPE : std::int32_t
	{
		kKILL_CAM_NONE = 0x0,
		kKILL_CAM_PLAYER = 0x1,
		kKILL_CAM_VATS = 0x2,
	};
}
