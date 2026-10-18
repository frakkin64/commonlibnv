#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSDegradePriority
	{
	public:
		// members
		std::uint8_t cPriorityL;  // 00?
		std::uint8_t cPriorityH;  // 01?
		std::uint8_t cPriorityC;  // 02?
		std::uint8_t cState;      // 03?
	};
}
