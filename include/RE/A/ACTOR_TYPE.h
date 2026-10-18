#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ACTOR_TYPE : std::int32_t
	{
		kACTOR_TYPE_CREATURE = 0x0,
		kACTOR_TYPE_NPC = 0x1,
		kACTOR_TYPE_PC = 0x2,
	};
}
