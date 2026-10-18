#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PACK_EVENT_ACTION_TYPE : std::int32_t
	{
		kPEAT_BEGIN = 0x0,
		kPEAT_END = 0x1,
		kPEAT_CHANGE = 0x2,
		kPEAT_PATROL = 0x3,
		kNUM_PACK_EVENT_ACTION_TYPES = 0x4,
	};
}
