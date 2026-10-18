#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PC_FACTION_FLAG : std::int32_t
	{
		kPC_FACTIONFLAG_NONE = -1,
		kPC_FACTIONFLAG_MURDER = 0x0,
		kPC_FACTIONFLAG_ATTACK = 0x1,
		kPC_FACTIONFLAG_PLAYER_IS_ENEMY = 0x2,
	};
}
