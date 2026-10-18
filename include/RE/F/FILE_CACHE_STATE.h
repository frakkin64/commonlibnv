#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class FILE_CACHE_STATE : std::int32_t
	{
		kFILE_CACHING_DISABLED = 0x0,
		kFILE_CACHING_IN_PROGRESS = 0x1,
		kFILE_CACHING_PAUSED = 0x2,
		kFILE_CACHING_FORCE_PAUSED = 0x3,
		kFILE_CACHING_FINISHED = 0x4,
	};
}
