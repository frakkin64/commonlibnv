#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class DIALOGUE_EMOTION : std::int32_t
	{
		kDE_NEUTRAL = 0x0,
		kDE_ANGER = 0x1,
		kDE_DISGUST = 0x2,
		kDE_FEAR = 0x3,
		kDE_SAD = 0x4,
		kDE_HAPPY = 0x5,
		kDE_SURPRISE = 0x6,
		kDE_PAINED = 0x7,
		kDIALOGUE_EMOTION_COUNT = 0x8,
	};
}
