#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class DEBUGTEXT_LOCATION : std::int32_t
	{
		kDTL_LEFT = 0x0,
		kDTL_RIGHT = 0x1,
		kDTL_CENTER = 0x2,
		kDTL_COUNT = 0x3,
	};
}
