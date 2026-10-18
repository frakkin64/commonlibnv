#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class CACHE_STATUS : std::int32_t
	{
		kCACHE_STATUS_NOT_CACHED = 0x0,
		kCACHE_STATUS_PARTIALLY_CACHED = 0x1,
		kCACHE_STATUS_FULLY_CACHED = 0x2,
		kCACHE_STATUS_COUNT = 0x3,
	};
}
