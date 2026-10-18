#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class AMMO_EFFECT_TYPE : std::int32_t
	{
		kAMMO_EFFECT_DAM = 0x0,
		kAMMO_EFFECT_DR = 0x1,
		kAMMO_EFFECT_DT = 0x2,
		kAMMO_EFFECT_SPREAD = 0x3,
		kAMMO_EFFECT_CONDITION = 0x4,
		kAMMO_EFFECT_FATIGUE = 0x5,
		kAMMO_EFFECT_TYPE_COUNT = 0x6,
	};
}
