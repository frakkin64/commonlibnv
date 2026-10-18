#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class FADER_ENUM : std::int32_t
	{
		kFADER_BLACK_UNDER_MENUS = 0x0,
		kFADER_TO_BLACK = 0x1,
		kFADER_TO_WHITE = 0x2,
		kFADER_COUNT = 0x3,
	};
}
