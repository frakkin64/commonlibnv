#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class KNOCK_STATE_ENUM : std::int32_t
	{
		kKNOCK_STATE_NORMAL = 0x0,
		kKNOCK_STATE_EXPLODE = 0x1,
		kKNOCK_STATE_EXPLODE_LEAD_IN = 0x2,
		kKNOCK_STATE_OUT = 0x3,
		kKNOCK_STATE_OUT_LEAD_IN = 0x4,
		kKNOCK_STATE_QUEUED = 0x5,
		kKNOCK_STATE_GET_UP = 0x6,
	};
}
