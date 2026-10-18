#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CombatAction;

	class CombatPlanStep
	{
	public:
		// members
		CombatAction*   pAction;       // 00
		CombatPlanStep* pParentStep;   // 04
		std::uint32_t   iNodeKey;      // 08?
		std::int32_t    iActionValue;  // 0C?
	};
}
