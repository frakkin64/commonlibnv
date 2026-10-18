#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class TESWeather_ColorTime : std::int32_t
	{
		kSUNRISE = 0x0,
		kDAY = 0x1,
		kSUNSET = 0x2,
		kNIGHT = 0x3,
		kNOON = 0x4,
		kMIDNIGHT = 0x5,
		kNUM_TIMES = 0x6,
	};
}
