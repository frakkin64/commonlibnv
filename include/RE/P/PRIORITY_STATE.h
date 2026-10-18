#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PRIORITY_STATE : std::int32_t
	{
		kPS_NONE = 0x0,
		kPS_DEGRADING = 0x1,
		kPS_UPGRADING = 0x2,
		kPS_DEGRADED = 0x3,
		kPS_UPGRADED = 0x4,
	};
}
