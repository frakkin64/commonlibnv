#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class FIGHT_REACTION : std::int32_t
	{
		kFIGHT_REACTION_NEUTRAL = 0x0,
		kFIGHT_REACTION_ENEMY = 0x1,
		kFIGHT_REACTION_ALLY = 0x2,
		kFIGHT_REACTION_FRIEND = 0x3,
		kFIGHT_REACTION_COUNT = 0x4,
	};
}
