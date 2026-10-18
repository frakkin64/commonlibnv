#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class AITaskType : std::int32_t
	{
		kAIT_ALL = 0x0,
		kAIT_DETECTION = 0x1,
		kAIT_PACKAGES = 0x2,
		kAIT_ANIMATION = 0x3,
		kAIT_UPDATE = 0x4,
		kAIT_SCRIPTS = 0x5,
		kAIT_MOVEMENT = 0x6,
		kAIT_COUNT = 0x7,
	};
}
