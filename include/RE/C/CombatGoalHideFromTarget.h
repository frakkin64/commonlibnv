#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalHideFromTarget :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalHideFromTarget };
		static constexpr auto VTABLE{ VTABLE::CombatGoalHideFromTarget };

		CombatGoalHideFromTarget* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalHideFromTarget*(__thiscall*)(CombatGoalHideFromTarget*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalHideFromTarget::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalHideFromTarget) == 0x1C);
}
