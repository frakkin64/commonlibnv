#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiThread_Priority : std::int32_t
	{
		kLOW = 0x0,
		kMEDIUM = 0x1,
		kHIGH = 0x2,
		kIMMEDIATE = 0x3,
		kNUM_PRIORITIES = 0x4,
	};
}
