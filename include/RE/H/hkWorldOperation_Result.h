#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkWorldOperation_Result : std::int32_t
	{
		kPOSTPONED = 0x0,
		kDONE = 0x1,
	};
}
