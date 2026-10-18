#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class StatsMenu_BodyPartController_BodyPartIndex : std::int32_t
	{
		kSM_HEAD = 0x0,
		kSM_RIGHTARM = 0x1,
		kSM_TORSO = 0x2,
		kSM_LEFTARM = 0x3,
		kSM_RIGHTLEG = 0x4,
		kSM_LEFTLEG = 0x5,
		kSM_BODYPART_COUNT = 0x6,
	};
}
