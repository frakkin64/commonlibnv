#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpConvexListFilter_ConvexListCollisionType : std::int32_t
	{
		kTREAT_CONVEX_LIST_AS_NORMAL = 0x0,
		kTREAT_CONVEX_LIST_AS_LIST = 0x1,
		kTREAT_CONVEX_LIST_AS_CONVEX = 0x2,
	};
}
