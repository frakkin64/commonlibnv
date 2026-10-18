#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class StartMenu_UserOption_UserOptionType : std::int32_t
	{
		kUOPT_TOGGLE = 0x0,
		kUOPT_TOGGLE_NOWRAP = 0x1,
		kUOPT_METER = 0x2,
	};
}
