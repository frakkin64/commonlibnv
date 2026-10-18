#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class LOCATION_TARGET_TYPE : std::int32_t
	{
		kLOCATION_TARGET_DESTINATION = 0x0,
		kLOCATION_TARGET_GUARD = 0x1,
		kLOCATION_TARGET_CLUSTER = 0x2,
		kLOCATION_TARGET_COMBAT_AREA = 0x3,
		kLOCATION_TARGET_COUNT = 0x4,
	};
}
