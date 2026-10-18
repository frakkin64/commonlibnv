#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiTexturingProperty_FilterMode : std::int32_t
	{
		kFILTER_NEAREST = 0x0,
		kFILTER_BILERP = 0x1,
		kFILTER_TRILERP = 0x2,
		kFILTER_NEAREST_MIPNEAREST = 0x3,
		kFILTER_NEAREST_MIPLERP = 0x4,
		kFILTER_BILERP_MIPNEAREST = 0x5,
		kFILTER_ANISO = 0x6,
		kFILTER_MAGLERP_MINANISO = 0x7,
		kFILTER_MAX_MODES = 0x8,
	};
}
