#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PDIAL_TRIGGER_TYPE : std::int32_t
	{
		kPDTT_NONE = 0x0,
		kPDTT_DISTANCE_CHECK = 0x1,
		kPDTT_AT_LOCATION = 0x2,
	};
}
