#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkFileSystem_FlagValues : std::int32_t
	{
		kF_ISFILE = 0x1,
		kF_ISDIR = 0x2,
	};
}
