#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SYSUTIL_REGION : std::int32_t
	{
		kSYSUTIL_REGION_UNKNOWN = 0x0,
		kSYSUTIL_REGION_NTSC = 0x1,
		kSYSUTIL_REGION_PAL = 0x2,
	};
}
