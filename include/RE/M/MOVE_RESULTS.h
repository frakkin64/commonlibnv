#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class MOVE_RESULTS : std::int32_t
	{
		kMOVE_OK = 0x0,
		kMOVE_ERROR = 0x1,
		kMOVE_HIT = 0x2,
	};
}
