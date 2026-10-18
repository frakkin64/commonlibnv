#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSThread_StackSize : std::int32_t
	{
		kINHERIT_MAIN = 0x0,
		kSMALL_STACK_SIZE = 0x4000,
		kMEDIUM_STACK_SIZE = 0x8000,
		kLARGE_STACK_SIZE = 0x10000,
		kMAINTHREAD_STACK_SIZE = 0x20000,
	};
}
