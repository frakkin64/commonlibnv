#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class RaceSexMenuContext : std::int32_t
	{
		kRSM_CONTEXT_NONE = 0x0,
		kRSM_CONTEXT_CHARGEN = 0x1,
		kRSM_CONTEXT_BARBER = 0x2,
		kRSM_CONTEXT_PLASTIC_SURGEON = 0x3,
	};
}
