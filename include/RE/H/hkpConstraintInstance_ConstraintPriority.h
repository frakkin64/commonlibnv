#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpConstraintInstance_ConstraintPriority : std::int32_t
	{
		kPRIORITY_INVALID = 0x0,
		kPRIORITY_PSI = 0x1,
		kPRIORITY_SIMPLIFIED_TOI_UNUSED = 0x2,
		kPRIORITY_TOI = 0x3,
		kPRIORITY_TOI_HIGHER = 0x4,
		kPRIORITY_TOI_FORCED = 0x5,
	};
}
