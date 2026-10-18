#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiKFMTool_TransitionType : std::int32_t
	{
		kTYPE_BLEND = 0x0,
		kTYPE_MORPH = 0x1,
		kTYPE_CROSSFADE = 0x2,
		kTYPE_CHAIN = 0x3,
		kTYPE_DEFAULT_SYNC = 0x4,
		kTYPE_DEFAULT_NONSYNC = 0x5,
		kTYPE_DEFAULT_INVALID = 0x6,
	};
}
