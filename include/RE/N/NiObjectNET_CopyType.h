#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiObjectNET_CopyType : std::int32_t
	{
		kCOPY_NONE = 0x0,
		kCOPY_EXACT = 0x1,
		kCOPY_UNIQUE = 0x2,
	};
}
