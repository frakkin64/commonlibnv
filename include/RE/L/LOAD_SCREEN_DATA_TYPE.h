#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class LOAD_SCREEN_DATA_TYPE : std::int32_t
	{
		kLSDT_NONE = 0x0,
		kLSDT_XP_PROGRESS = 0x1,
		kLSDT_OBJECTIVE = 0x2,
		kLSDT_TIP = 0x3,
		kLSDT_STATS = 0x4,
		kNUM_LSDT = 0x5,
	};
}
