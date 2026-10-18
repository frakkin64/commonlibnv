#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatPlanUnsatisfiedState.h"
#include "RE/C/CombatWorldStateArray.h"

namespace RE
{
	class CombatPlanNode
	{
	public:
		CombatPlanNode* ctor(CombatWorldStateArray* apWorldStateArray)
		{
			using func_t = CombatPlanNode*(__thiscall*)(CombatPlanNode*, CombatWorldStateArray*);
			static REL::Relocation<func_t> func{ Offsets::CombatPlanNode::ctor };
			return func(this, apWorldStateArray);
		}

	public:
		// members
		CombatWorldStateArray      WorldState;              // 00
		CombatPlanUnsatisfiedState UnsatisfiedStates[16];   // 5C
		std::uint32_t              iUnsatisfiedStateCount;  // DC
		std::uint32_t              iKey;                    // E0
	};
}
