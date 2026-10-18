#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkxAttribute_Hint : std::int32_t
	{
		kHINT_NONE = 0x0,
		kHINT_IGNORE = 0x1,
		kHINT_TRANSFORM = 0x2,
		kHINT_SCALE = 0x4,
		kHINT_TRANSFORM_AND_SCALE = 0x6,
		kHINT_FLIP = 0x8,
	};
}
