#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NavMeshMath_CIRCLE_SEGMENT_INTERSECTION_TYPE : std::int32_t
	{
		kCSIT_NONE = 0x0,
		kCSIT_EDGE = 0x1,
		kCSIT_ENDPOINT = 0x2,
	};
}
