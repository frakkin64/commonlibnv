#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SkillLevel_Value : std::int32_t
	{
		kNOVICE = 0x0,
		kAPPRENTICE = 0x1,
		kJOURNEYMAN = 0x2,
		kEXPERT = 0x3,
		kMASTER = 0x4,
		kSKILL_LEVEL_COUNT = 0x5,
	};
}
