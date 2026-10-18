#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiTexture_FormatPrefs_MipFlag : std::int32_t
	{
		kNO = 0x0,
		kYES = 0x1,
		kMIP_DEFAULT = 0x2,
	};
}
