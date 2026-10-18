#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ScreenSplatterType : std::int32_t
	{
		kSCREENSPLATTER_BLOOD = 0x0,
		kSCREENSPLATTER_BLOOD2 = 0x1,
		kSCREENSPLATTER_BLOOD3 = 0x2,
		kSCREENSPLATTER_COUNT = 0x3,
	};
}
