#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BaseProcess_FADE_STATE : std::int32_t
	{
		kFADE_NORMAL = 0x0,
		kFADE_IN = 0x1,
		kFADE_OUT = 0x2,
		kFADE_TELEPORT_IN = 0x3,
		kFADE_TELEPORT_OUT = 0x4,
		kFADE_OUT_DISABLE = 0x5,
		kFADE_OUT_DELETE = 0x6,
		kFADE_OUT_MOVE = 0x7,
	};
}
