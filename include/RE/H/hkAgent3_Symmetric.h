#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkAgent3_Symmetric : std::int32_t
	{
		kIS_SYMMETRIC = 0x0,
		kIS_NOT_SYMMETRIC = 0x1,
		kIS_NOT_SYMMETRIC_AND_FLIPPED = 0x2,
	};
}
