#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiTexture_FormatPrefs_PixelLayout : std::int32_t
	{
		kPALETTIZED_8 = 0x0,
		kHIGH_COLOR_16 = 0x1,
		kTRUE_COLOR_32 = 0x2,
		kCOMPRESSED = 0x3,
		kBUMPMAP = 0x4,
		kPALETTIZED_4 = 0x5,
		kPIX_DEFAULT = 0x6,
		kSINGLE_COLOR_8 = 0x7,
		kSINGLE_COLOR_16 = 0x8,
		kSINGLE_COLOR_32 = 0x9,
		kDOUBLE_COLOR_32 = 0xA,
		kDOUBLE_COLOR_64 = 0xB,
		kFLOAT_COLOR_32 = 0xC,
		kFLOAT_COLOR_64 = 0xD,
		kFLOAT_COLOR_128 = 0xE,
	};
}
