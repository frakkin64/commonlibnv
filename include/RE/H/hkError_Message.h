#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkError_Message : std::int32_t
	{
		kMESSAGE_REPORT = 0x0,
		kMESSAGE_WARNING = 0x1,
		kMESSAGE_ASSERT = 0x2,
		kMESSAGE_ERROR = 0x3,
	};
}
