#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpWorldCinfo_SimulationType : std::int32_t
	{
		kSIMULATION_TYPE_INVALID = 0x0,
		kSIMULATION_TYPE_DISCRETE = 0x1,
		kSIMULATION_TYPE_CONTINUOUS = 0x2,
		kSIMULATION_TYPE_MULTITHREADED = 0x3,
	};
}
