#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkJobSpuType : std::int32_t
	{
		kHK_JOB_SPU_TYPE_INVALID = 0x0,
		kHK_JOB_SPU_TYPE_ENABLED = 0x1,
		kHK_JOB_SPU_TYPE_DISABLED = 0x2,
	};
}
