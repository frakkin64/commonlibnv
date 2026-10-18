#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class KEY_EVENT_TYPE : std::int32_t
	{
		kKEY_EVENT_NONE = 0x0,
		kKEY_EVENT_DOWN = 0x1,
		kKEY_EVENT_UP = 0x2,
	};
}
