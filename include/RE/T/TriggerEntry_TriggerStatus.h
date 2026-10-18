#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class TriggerEntry_TriggerStatus : std::int32_t
	{
		kTRIGGER_STATUS_NONE = 0x0,
		kTRIGGER_STATUS_ENTER = 0x1,
		kTRIGGER_STATUS_EXIT = 0x2,
	};
}
