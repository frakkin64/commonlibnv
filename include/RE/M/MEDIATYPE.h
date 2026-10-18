#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class MEDIATYPE : std::int32_t
	{
		kMEDIA_STANDBY = 0x0,
		kMEDIA_OBJECT = 0x1,
		kMEDIA_LOCATION = 0x2,
		kMEDIA_DUNGEON = 0x3,
		kMEDIA_BATTLE = 0x4,
		kMEDIA_LOCATION_BATTLE = 0x5,
		kMEDIA_SPECIAL = 0x6,
		kMEDIA_RADIO = 0x7,
		kMEDIA_MAINMENU = 0x8,
		kMEDIA_NONE = 0x9,
	};
}
