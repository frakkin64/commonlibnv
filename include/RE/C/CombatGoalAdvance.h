#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalAdvance :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalAdvance };
		static constexpr auto VTABLE{ VTABLE::CombatGoalAdvance };

		CombatGoalAdvance* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalAdvance*(__thiscall*)(CombatGoalAdvance*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalAdvance::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalAdvance) == 0x1C);
}
