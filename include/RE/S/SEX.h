#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SEX : std::int32_t
	{
		kSEX_NONE = -1,
		kSEX_MALE = 0x0,
		kSEX_FEMALE = 0x1,
		kSEX_COUNT = 0x2,
	};
}
