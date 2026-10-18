#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SKILL_ACTION : std::int32_t
	{
		kSA_BLOCK = 0x0,
		kSA_REPAIR = 0x0,
		kSA_ATTACK = 0x0,
		kSA_CAST = 0x0,
		kSA_BARGAIN = 0x0,
		kSA_PERSUASION = 0x0,
		kSA_HIT_BY_OPPONENT = 0x0,
		kSA_SECOND_OF_RUNNING = 0x0,
		kSA_POTION_CREATION = 0x0,
		kSA_PICK_LOCK = 0x0,
		kSA_AVOID_NOTICE = 0x0,
		kSA_JUMP = 0x0,
		kSA_SECOND_OF_SWIMMING = 0x1,
		kSA_INGREDIENT_USE = 0x1,
		kSA_PICK_POCKET = 0x1,
		kSA_FALL = 0x1,
		kSA_SPELLHIT = 0x1,
		kMAX_SKILL_ACTION = 0x2,
	};
}
