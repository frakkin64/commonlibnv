#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class COMPILER_NAME : std::int32_t
	{
		kDEFAULT_COMPILER = 0x0,
		kSYSTEM_WINDOW_COMPILER = 0x1,
		kDIALOGUE_COMPILER = 0x2,
		kCOMPILER_NAME_COUNT = 0x3,
	};
}
