#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalFlank :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalFlank };
		static constexpr auto VTABLE{ VTABLE::CombatGoalFlank };

		CombatGoalFlank* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalFlank*(__thiscall*)(CombatGoalFlank*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalFlank::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalFlank) == 0x1C);
}
