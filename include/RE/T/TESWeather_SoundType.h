#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class TESWeather_SoundType : std::int32_t
	{
		kWST_DEFAULT = 0x0,
		kWST_PRECIP = 0x1,
		kWST_WIND = 0x2,
		kWST_THUNDER = 0x3,
		kWST_COUNT = 0x4,
	};
}
