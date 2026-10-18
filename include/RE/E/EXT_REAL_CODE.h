#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class EXT_REAL_CODE : std::int32_t
	{
		kFinite = 0x0,
		kPlusInfinity = 0x1,
		kMinusInfinity = 0x2,
		kIndefinite = 0x3,
		kMissing = 0x4,
	};
}
