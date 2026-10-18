#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SHAPE_TYPES : std::int32_t
	{
		kST_CAPSULE = 0x0,
		kST_CUSTOM = 0x0,
		kST_CONVEX = 0x1,
		kST_NUMTYPES = 0x2,
		kST_INVALID = 0x2,
	};
}
