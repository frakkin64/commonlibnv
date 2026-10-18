#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ImageSpaceEffectDepthRadialBlur_RadialBlurMode : std::int32_t
	{
		kDOF_FRONT_BACK = 0x0,
		kDOF_FRONT = 0x1,
		kDOF_BACK = 0x2,
		kDOF_NONE = 0x3,
	};
}
