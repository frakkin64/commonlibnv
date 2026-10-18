#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class MagicSystem_Range : std::int32_t
	{
		kSELF = 0x0,
		kTOUCH = 0x1,
		kTARGET = 0x2,
		kRANGE_COUNT = 0x3,
	};
}
