#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PATHING_PARAMETER_ID : std::int32_t
	{
		kPPAR_NONE = 0x0,
		kPPAR_INT = 0x1,
		kPPAR_INT_INT = 0x2,
		kPPAR_INT_INT_INT = 0x3,
		kPPAR_PATHING_LOCATION = 0x4,
	};
}
