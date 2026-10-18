#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ACTOR_CRITICAL_STAGE : std::int32_t
	{
		kACS_NONE = 0x0,
		kACS_GOO_START = 0x1,
		kACS_GOO_END = 0x2,
		kACS_DISINTEGRATE_START = 0x3,
		kACS_DISINTEGRATE_END = 0x4,
		kACS_COUNT = 0x5,
	};
}
