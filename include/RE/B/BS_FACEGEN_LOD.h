#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BS_FACEGEN_LOD : std::int32_t
	{
		kBS_FACEGEN_LOD_NONE = -1,
		kBS_FACEGEN_LOD_LOW = 0x0,
		kBS_FACEGEN_LOD_HIGH = 0x1,
		kBS_FACEGEN_LOD_COUNT = 0x2,
	};
}
