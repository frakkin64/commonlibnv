#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class EDGE_EXTRA_INFO_TYPE : std::int32_t
	{
		kEIT_INVALID = -1,
		kEIT_PORTAL = 0x0,
		kEIT_LEDGE_UP = 0x1,
		kEIT_LEDGE_DOWN = 0x2,
		kEIT_ENABLE_DISABLE_PORTAL = 0x3,
	};
}
