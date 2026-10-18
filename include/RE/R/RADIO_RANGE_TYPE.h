#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class RADIO_RANGE_TYPE : std::int32_t
	{
		kRADIO_RANGE_RADIUS = 0x0,
		kRADIO_RANGE_EVERYWHERE = 0x1,
		kRADIO_RANGE_WORLDSPACE = 0x2,
		kRADIO_RANGE_LINKEDINT = 0x3,
		kRADIO_RANGE_CURRENT_CELL = 0x4,
		kRADIO_RANGE_COUNT = 0x5,
	};
}
