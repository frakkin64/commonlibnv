#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkStatisticsCollector_MemoryType : std::int32_t
	{
		kMEM_OBJECT = 0x0,
		kMEM_NORMAL = 0x1,
		kMEM_ALLOCATED = 0x2,
		kMEM_ARRAY = 0x3,
		kMEM_OTHER = 0x4,
		kMEM_LAST = 0x5,
	};
}
