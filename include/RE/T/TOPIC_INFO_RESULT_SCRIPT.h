#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class TOPIC_INFO_RESULT_SCRIPT : std::int32_t
	{
		kTIRS_BEGIN = 0x0,
		kTIRS_END = 0x1,
		kTIRS_COUNT = 0x2,
	};
}
