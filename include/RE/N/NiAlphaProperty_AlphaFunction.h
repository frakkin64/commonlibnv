#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiAlphaProperty_AlphaFunction : std::int32_t
	{
		kALPHA_ONE = 0x0,
		kALPHA_ZERO = 0x1,
		kALPHA_SRCCOLOR = 0x2,
		kALPHA_INVSRCCOLOR = 0x3,
		kALPHA_DESTCOLOR = 0x4,
		kALPHA_INVDESTCOLOR = 0x5,
		kALPHA_SRCALPHA = 0x6,
		kALPHA_INVSRCALPHA = 0x7,
		kALPHA_DESTALPHA = 0x8,
		kALPHA_INVDESTALPHA = 0x9,
		kALPHA_SRCALPHASAT = 0xA,
		kALPHA_MAX_MODES = 0xB,
	};
}
