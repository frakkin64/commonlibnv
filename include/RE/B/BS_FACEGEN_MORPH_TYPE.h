#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BS_FACEGEN_MORPH_TYPE : std::int32_t
	{
		kBS_FG_MORPH_NONE = -1,
		kBS_FG_MORPH_PHONEME = 0x0,
		kBS_FG_MORPH_EXPRESSION = 0x1,
		kBS_FG_MORPH_MODIFIER = 0x2,
		kBS_FG_MORPH_CUSTOM = 0x3,
		kBS_FG_MORPH_COUNT = 0x4,
	};
}
