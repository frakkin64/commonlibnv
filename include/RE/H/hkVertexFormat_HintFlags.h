#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkVertexFormat_HintFlags : std::int32_t
	{
		kFLAG_READ = 0x1,
		kFLAG_WRITE = 0x2,
		kFLAG_DYNAMIC = 0x4,
		kFLAG_NOT_SHARED = 0x8,
	};
}
