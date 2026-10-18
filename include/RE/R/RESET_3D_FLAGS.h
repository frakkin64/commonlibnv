#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class RESET_3D_FLAGS : std::int32_t
	{
		kRESET_MODEL = 0x1,
		kRESET_SKIN = 0x2,
		kRESET_HEAD = 0x4,
		kRESET_FACE = 0x8,
		kRESET_SCALE = 0x10,
	};
}
