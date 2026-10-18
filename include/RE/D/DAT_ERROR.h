#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class DAT_ERROR : std::int32_t
	{
		kDAT_ERROR_GENERIC = 0x0,
		kDAT_ERROR_NO_FILE = 0x1,
		kDAT_ERROR_LINK = 0x2,
		kDAT_ERROR_UNKNOWN_FORM = 0x3,
		kDAT_ERROR_FILE_FAILURE = 0x4,
	};
}
