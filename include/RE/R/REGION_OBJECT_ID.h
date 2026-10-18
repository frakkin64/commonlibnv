#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class REGION_OBJECT_ID : std::int32_t
	{
		kREGION_OBJECT_OBJECT_ID = 0x0,
		kREGION_OBJECT_GRASS_ID = 0x1,
		kREGION_OBJECT_COUNT = 0x2,
	};
}
