#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpBodyOperation_ExecutionState : std::int32_t
	{
		kEXECUTE_SINGLE_THREADED = 0x0,
		kEXECUTE_MULTI_THREADED = 0x1,
	};
}
