#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class WEAPON_RUMBLE_PATTERN : std::int32_t
	{
		kRUMBLE_CONSTANT = 0x0,
		kRUMBLE_PERIODIC_SQUARE = 0x1,
		kRUMBLE_PERIODIC_TRIANGLE = 0x2,
		kRUMBLE_PERIODIC_SAWTOOTH = 0x3,
		kRUMBLE_PATTERN_COUNT = 0x4,
	};
}
