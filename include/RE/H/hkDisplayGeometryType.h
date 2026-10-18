#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkDisplayGeometryType : std::int32_t
	{
		kHK_DISPLAY_RECTANGLE = 0x0,
		kHK_DISPLAY_SPHERE = 0x1,
		kHK_DISPLAY_BOX = 0x2,
		kHK_DISPLAY_AABB = 0x3,
		kHK_DISPLAY_CONE = 0x4,
		kHK_DISPLAY_SEMICIRCLE = 0x5,
		kHK_DISPLAY_CONVEX = 0x6,
		kHK_DISPLAY_PLANE = 0x7,
		kHK_DISPLAY_CAPSULE = 0x8,
		kHK_DISPLAY_CYLINDER = 0x9,
	};
}
