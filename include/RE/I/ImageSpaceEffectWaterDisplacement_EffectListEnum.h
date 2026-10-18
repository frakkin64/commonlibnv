#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ImageSpaceEffectWaterDisplacement_EffectListEnum : std::int32_t
	{
		kEFFECT_CLEAR_SIMULATION = 0x0,
		kEFFECT_TEX_OFFSET = 0x1,
		kEFFECT_WADING_RIPPLE = 0x2,
		kEFFECT_RAIN_RIPPLE = 0x3,
		kEFFECT_WADING_HEIGHTMAP = 0x4,
		kEFFECT_RAIN_HEIGHTMAP = 0x5,
		kEFFECT_BLEND_HEIGHTMAPS = 0x6,
		kEFFECT_SMOOTH_HEIGHTMAP = 0x7,
		kEFFECT_NORMALS = 0x8,
		kEFFECT_COUNT = 0x9,
	};
}
