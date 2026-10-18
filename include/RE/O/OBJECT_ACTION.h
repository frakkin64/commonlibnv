#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class OBJECT_ACTION : std::int32_t
	{
		kOBJECT_ACTION_USE_DEFAULT = 0x1,
		kOBJECT_ACTION_ACTIVATE = 0x2,
		kOBJECT_ACTION_OPEN = 0x4,
		kOBJECT_ACTION_OPEN_BY_DEFAULT = 0x8,
	};
}
