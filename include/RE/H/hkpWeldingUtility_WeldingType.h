#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpWeldingUtility_WeldingType : std::int32_t
	{
		kWELDING_TYPE_ANTICLOCKWISE = 0x0,
		kWELDING_TYPE_CLOCKWISE = 0x4,
		kWELDING_TYPE_TWO_SIDED = 0x5,
		kWELDING_TYPE_NONE = 0x6,
	};
}
