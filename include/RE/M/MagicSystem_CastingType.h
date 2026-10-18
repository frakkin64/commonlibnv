#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class MagicSystem_CastingType : std::int32_t
	{
		kCAST_ONCE = 0x0,
		kWHEN_USED = 0x1,
		kWHEN_STRIKES = 0x2,
		kCONSTANT_EFFECT = 0x3,
		kCASTING_COUNT = 0x4,
	};
}
