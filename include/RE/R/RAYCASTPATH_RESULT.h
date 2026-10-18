#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class RAYCASTPATH_RESULT : std::int32_t
	{
		kRCP_NONE = 0x0,
		kRCP_SUCCESS = 0x1,
		kRCP_FAILED = 0x2,
	};
}
