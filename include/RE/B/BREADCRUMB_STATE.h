#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BREADCRUMB_STATE : std::int32_t
	{
		kBREADCRUMB_STATE_INVALID = 0x0,
		kBREADCRUMB_STATE_ON_GROUND = 0x1,
		kBREADCRUMB_STATE_IN_WATER = 0x2,
	};
}
