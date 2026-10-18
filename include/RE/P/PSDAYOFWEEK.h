#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PSDAYOFWEEK : std::int32_t
	{
		kPSD_NONE = -1,
		kPSD_SUNDAY = 0x0,
		kPSD_MONDAY = 0x1,
		kPSD_TUESDAY = 0x2,
		kPSD_WEDNESDAY = 0x3,
		kPSD_THURSDAY = 0x4,
		kPSD_FRIDAY = 0x5,
		kPSD_SATURDAY = 0x6,
		kPSD_WEEKDAY = 0x7,
		kPSD_WEEKEND = 0x8,
		kPSD_MWF = 0x9,
		kPSD_TT = 0xA,
		kPSD_COUNT = 0xB,
	};
}
