#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CombatPlanNode;
	class CombatWorldState;

	// not confirmed: no named code in the executable refers to this type
	class CombatPlanUnsatisfiedState
	{
	public:
		// members
		CombatWorldState* pUnsatisfiedState;        // 00?
		CombatPlanNode*   pUnsatisfiedStateParent;  // 04?
	};
}
