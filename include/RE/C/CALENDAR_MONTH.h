#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class CALENDAR_MONTH : std::int32_t
	{
		kMONTH_NONE = -1,
		kMONTH_JANUARY = 0x0,
		kMONTH_FEBRUARY = 0x1,
		kMONTH_MARCH = 0x2,
		kMONTH_APRIL = 0x3,
		kMONTH_MAY = 0x4,
		kMONTH_JUNE = 0x5,
		kMONTH_JULY = 0x6,
		kMONTH_AUGUST = 0x7,
		kMONTH_SEPTEMBER = 0x8,
		kMONTH_OCTOBER = 0x9,
		kMONTH_NOVEMBER = 0xA,
		kMONTH_DECEMBER = 0xB,
		kMONTH_COUNT = 0xC,
	};
}
