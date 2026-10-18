#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class AMMO_OPERATION_TYPE : std::int32_t
	{
		kAMMO_OPERATION_PLUS = 0x0,
		kAMMO_OPERATION_TIMES = 0x1,
		kAMMO_OPERATION_MINUS = 0x2,
		kAMMO_OPERATION_COUNT = 0x3,
	};
}
