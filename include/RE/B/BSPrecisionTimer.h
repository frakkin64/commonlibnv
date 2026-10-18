#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSPrecisionTimer
	{
	public:
		// members
		std::int64_t iStartTime;   // 00
		std::int64_t iTargetTime;  // 08?
	};
}
