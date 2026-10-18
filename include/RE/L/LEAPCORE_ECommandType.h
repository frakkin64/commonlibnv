#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class LEAPCORE_ECommandType : std::int32_t
	{
		kCMD_ASYNC = 0x0,
		kCMD_DEFER = 0x1,
		kCMD_CREATE = 0x2,
		kCMD_COMMIT = 0x3,
		kCMD_TYPE_FIRST = 0x0,
		kCMD_TYPE_LAST = 0x3,
	};
}
