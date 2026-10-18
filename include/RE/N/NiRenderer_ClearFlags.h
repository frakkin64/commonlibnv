#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiRenderer_ClearFlags : std::int32_t
	{
		kCLEAR_BACKBUFFER = 0x1,
		kCLEAR_STENCIL = 0x2,
		kCLEAR_ZBUFFER = 0x4,
		kCLEAR_NONE = 0x0,
		kCLEAR_ALL = 0x7,
	};
}
