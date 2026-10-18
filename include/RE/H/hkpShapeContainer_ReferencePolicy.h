#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpShapeContainer_ReferencePolicy : std::int32_t
	{
		kREFERENCE_POLICY_IGNORE = 0x0,
		kREFERENCE_POLICY_INCREMENT = 0x1,
	};
}
