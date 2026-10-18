#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiFile_OpenMode : std::int32_t
	{
		kREAD_ONLY = 0x0,
		kWRITE_ONLY = 0x1,
		kAPPEND_ONLY = 0x2,
	};
}
