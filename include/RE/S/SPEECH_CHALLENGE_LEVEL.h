#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SPEECH_CHALLENGE_LEVEL : std::int32_t
	{
		kSCL_NONE = 0x0,
		kSCL_VERYEASY = 0x1,
		kSCL_EASY = 0x2,
		kSCL_AVERAGE = 0x3,
		kSCL_HARD = 0x4,
		kSCL_VERYHARD = 0x5,
		kSCL_COUNT = 0x6,
	};
}
