#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class CSpeedTreeRT_EWindMethod : std::int32_t
	{
		kWIND_GPU = 0x0,
		kWIND_CPU = 0x1,
		kWIND_NONE = 0x2,
	};
}
