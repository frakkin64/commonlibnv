#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSMultiBoundShape_BSMBIntersectResult : std::int32_t
	{
		kBS_INTERSECT_NONE = 0x0,
		kBS_INTERSECT_PARTIAL = 0x1,
		kBS_INTERSECT_CONTAINSTARGET = 0x2,
	};
}
