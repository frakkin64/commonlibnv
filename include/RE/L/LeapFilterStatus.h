#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class LeapFilterStatus : std::int32_t
	{
		kFilterStarted = 0x0,
		kFilterStopped = 0x1,
	};
}
