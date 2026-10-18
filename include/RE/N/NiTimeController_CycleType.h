#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiTimeController_CycleType : std::int32_t
	{
		kLOOP = 0x0,
		kREVERSE = 0x1,
		kCLAMP = 0x2,
		kMAX_CYCLE_TYPES = 0x3,
	};
}
