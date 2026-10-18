#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class CSpeedTreeRT_EStaticLightingStyle : std::int32_t
	{
		kSLS_BASIC = 0x0,
		kSLS_USE_LIGHT_SOURCES = 0x1,
		kSLS_SIMULATE_SHADOWS = 0x2,
	};
}
