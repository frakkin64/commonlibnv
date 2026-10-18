#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalFindTarget :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalFindTarget };
		static constexpr auto VTABLE{ VTABLE::CombatGoalFindTarget };

		CombatGoalFindTarget* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalFindTarget*(__thiscall*)(CombatGoalFindTarget*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalFindTarget::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalFindTarget) == 0x1C);
}
