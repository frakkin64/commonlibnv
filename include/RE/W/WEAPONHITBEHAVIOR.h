#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class WEAPONHITBEHAVIOR : std::int32_t
	{
		kWHB_NORMAL = 0x0,
		kWHB_DISMEMBER_ONLY = 0x1,
		kWHB_EXPLODE_ONLY = 0x2,
		kWHB_NO_DISMEMBER_OR_EXPLODE = 0x3,
	};
}
