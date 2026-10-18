#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NavMeshMath_CIRCLE_SEGMENT_INTERSECTION : std::int32_t
	{
		kCSI_NONE = 0x0,
		kCSI_ONEPOINT_LOWER = 0x1,
		kCSI_ONEPOINT_UPPER = 0x2,
		kCSI_TANGENT = 0x3,
		kCSI_TWOPOINTS = 0x4,
		kCSI_CONTAINED = 0x5,
		kCSI_COUNT = 0x6,
	};
}
