#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpWorldCinfo_BroadPhaseBorderBehaviour : std::int32_t
	{
		kBROADPHASE_BORDER_ASSERT = 0x0,
		kBROADPHASE_BORDER_FIX_ENTITY = 0x1,
		kBROADPHASE_BORDER_REMOVE_ENTITY = 0x2,
		kBROADPHASE_BORDER_DO_NOTHING = 0x3,
	};
}
