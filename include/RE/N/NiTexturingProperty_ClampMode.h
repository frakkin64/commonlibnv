#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiTexturingProperty_ClampMode : std::int32_t
	{
		kCLAMP_S_CLAMP_T = 0x0,
		kCLAMP_S_WRAP_T = 0x1,
		kWRAP_S_CLAMP_T = 0x2,
		kWRAP_S_WRAP_T = 0x3,
		kCLAMP_MAX_MODES = 0x4,
	};
}
