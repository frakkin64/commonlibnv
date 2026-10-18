#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalCluster :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalCluster };
		static constexpr auto VTABLE{ VTABLE::CombatGoalCluster };

		CombatGoalCluster* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalCluster*(__thiscall*)(CombatGoalCluster*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalCluster::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalCluster) == 0x1C);
}
