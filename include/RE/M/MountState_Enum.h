#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class MountState_Enum : std::int32_t
	{
		kLoad = 0x0,
		kWait = 0x1,
		kFinalize = 0x2,
	};
}
