#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalAvoidThreats :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalAvoidThreats };
		static constexpr auto VTABLE{ VTABLE::CombatGoalAvoidThreats };

		CombatGoalAvoidThreats* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalAvoidThreats*(__thiscall*)(CombatGoalAvoidThreats*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalAvoidThreats::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalAvoidThreats) == 0x1C);
}
