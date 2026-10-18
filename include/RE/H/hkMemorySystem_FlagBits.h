#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkMemorySystem_FlagBits : std::int32_t
	{
		kFLAG_ROUTER = 0x1,
		kFLAG_FRAME = 0x2,
		kFLAG_ALL = 0x3,
	};
}
