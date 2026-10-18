#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkaSkeletonMapperUtils_ExtractedMotionParams_ExtractedMotionMode : std::int32_t
	{
		kHK_USE_BOUNDING_BOX_DIAGONAL = 0x0,
		kHK_USE_BONE_LENGTHS = 0x1,
		kHK_USE_FACTORS_DIRECTLY = 0x2,
	};
}
