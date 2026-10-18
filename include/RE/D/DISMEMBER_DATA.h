#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;

	class DISMEMBER_DATA
	{
	public:
		// members
		std::int32_t iLimb;    // 00?
		std::int32_t iCause;   // 04?
		Actor*       pKiller;  // 08?
	};
}
