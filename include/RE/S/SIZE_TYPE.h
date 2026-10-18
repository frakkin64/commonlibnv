#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SIZE_TYPE : std::int32_t
	{
		kSIZE_CHAR = 0x0,
		kSIZE_SHORT = 0x1,
		kSIZE_INT = 0x2,
		kSIZE_COUNT = 0x3,
	};
}
