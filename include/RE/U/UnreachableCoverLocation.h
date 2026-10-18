#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatTimeStamp.h"

namespace RE
{
	class UnreachableCoverLocation
	{
	public:
		// members
		std::uint32_t   iCoverKey;   // 00
		CombatTimeStamp fTimeStamp;  // 04
	};
	static_assert(sizeof(UnreachableCoverLocation) == 0x8);
}
