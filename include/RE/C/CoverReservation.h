#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CombatController;
	class CombatCoverLocation;

	// not confirmed: no named code in the executable refers to this type
	class CoverReservation
	{
	public:
		// members
		CombatController*    pCombatController;     // 00?
		CombatCoverLocation* pCombatCoverLocation;  // 04?
	};
}
