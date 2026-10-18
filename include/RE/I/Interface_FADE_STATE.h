#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class Interface_FADE_STATE : std::int32_t
	{
		kFADE_SHOWN = 0x1,
		kFADING_OUT = 0x2,
		kFADE_HIDDEN = 0x4,
		kFADING_IN = 0x8,
		kFADE_ALL = 0xF,
		kFADE_IN_SHOWN = 0x9,
		kFADE_OUT_SHOWN = 0x3,
		kFADE_NOT_HIDDEN = 0xB,
	};
}
