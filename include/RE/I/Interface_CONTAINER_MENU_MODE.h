#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class Interface_CONTAINER_MENU_MODE : std::int32_t
	{
		kCMM_NONE = 0x0,
		kCMM_STANDARD = 0x1,
		kCMM_PICKPOCKET = 0x2,
		kCMM_TEAMMATE = 0x3,
		kCMM_ROCK_N_LOAD = 0x4,
	};
}
