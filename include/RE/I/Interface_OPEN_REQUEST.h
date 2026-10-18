#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class Interface_OPEN_REQUEST : std::int32_t
	{
		kOPEN_NONE = 0x0,
		kOPEN_CONTAINER = 0x1,
		kOPEN_HACKING = 0x2,
		kOPEN_COMPUTERS = 0x3,
		kOPEN_DIALOG = 0x4,
		kOPEN_RACESEX = 0x5,
		kOPEN_PAUSE = 0x6,
		kOPEN_MESSAGE = 0x7,
		kOPEN_COMPANION_WHEEL = 0x8,
		kOPEN_PLAYER_NAME = 0x9,
	};
}
