#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalReachDestination :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalReachDestination };
		static constexpr auto VTABLE{ VTABLE::CombatGoalReachDestination };

		CombatGoalReachDestination* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalReachDestination*(__thiscall*)(CombatGoalReachDestination*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalReachDestination::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalReachDestination) == 0x1C);
}
