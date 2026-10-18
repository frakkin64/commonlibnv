#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PACK_TARG_TYPE : std::int32_t
	{
		kPTT_NONE = -1,
		kPTT_REFERENCE = 0x0,
		kPTT_OBJECT = 0x1,
		kPTT_TYPE = 0x2,
		kPTT_LINKEDREF = 0x3,
	};
}
