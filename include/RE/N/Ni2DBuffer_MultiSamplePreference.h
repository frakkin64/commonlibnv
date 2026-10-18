#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class Ni2DBuffer_MultiSamplePreference : std::int32_t
	{
		kMULTISAMPLE_NONE = 0x0,
		kMULTISAMPLE_2 = 0x1,
		kMULTISAMPLE_4 = 0x2,
		kMULTISAMPLE_8 = 0x3,
	};
}
