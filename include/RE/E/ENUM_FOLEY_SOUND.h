#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ENUM_FOLEY_SOUND : std::int32_t
	{
		kENUM_FOLEY_RUN = 0x13,
		kENUM_FOLEY_WALK = 0x12,
		kENUM_FOLEY_SNEAK = 0x11,
		kENUM_FOLEY_ARMOR_RUN = 0x16,
		kENUM_FOLEY_ARMOR_WALK = 0x15,
		kENUM_FOLEY_ARMOR_SNEAK = 0x14,
	};
}
