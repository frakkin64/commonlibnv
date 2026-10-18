#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BGSImpactDataSet_IMPACT_MATERIAL_TYPE : std::int32_t
	{
		kIMP_MAT_STONE = 0x0,
		kIMP_MAT_DIRT = 0x1,
		kIMP_MAT_GRASS = 0x2,
		kIMP_MAT_GLASS = 0x3,
		kIMP_MAT_METAL = 0x4,
		kIMP_MAT_WOOD = 0x5,
		kIMP_MAT_ORGANIC = 0x6,
		kIMP_MAT_CLOTH = 0x7,
		kIMP_MAT_WATER = 0x8,
		kIMP_MAT_HOLLOW_METAL = 0x9,
		kIMP_MAT_ORGANIC_BUG = 0xA,
		kIMP_MAT_ORGANIC_GLOW = 0xB,
		kIMP_MAT_COUNT = 0xC,
	};
}
