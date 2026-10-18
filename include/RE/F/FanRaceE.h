#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class FanRaceE : std::int32_t
	{
		kFANRACE_ALL = 0x0,
		kFANRACE_AFRO = 0x1,
		kFANRACE_ASIA = 0x2,
		kFANRACE_EIND = 0x3,
		kFANRACE_EURO = 0x4,
		kFANRACE_SIZE = 0x5,
	};
}
