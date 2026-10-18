#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpMotion_MotionType : std::int32_t
	{
		kMOTION_INVALID = 0x0,
		kMOTION_DYNAMIC = 0x1,
		kMOTION_SPHERE_INERTIA = 0x2,
		kMOTION_BOX_INERTIA = 0x3,
		kMOTION_KEYFRAMED = 0x4,
		kMOTION_FIXED = 0x5,
		kMOTION_THIN_BOX_INERTIA = 0x6,
		kMOTION_CHARACTER = 0x7,
		kMOTION_MAX_ID = 0x8,
	};
}
