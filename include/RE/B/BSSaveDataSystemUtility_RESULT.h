#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSSaveDataSystemUtility_RESULT : std::int32_t
	{
		kRESULT_SUCCESS = 0x0,
		kRESULT_CANCEL = 0x1,
		kRESULT_FAILED = 0x2,
	};
}
