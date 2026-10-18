#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class HAIR_PART : std::int32_t
	{
		kHAIR_PART_NONE = -1,
		kHAIR_PART_NORMAL = 0x0,
		kHAIR_PART_HAT = 0x1,
		kHAIR_PART_COUNT = 0x2,
	};
}
