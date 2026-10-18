#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalStayInCombatArea :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalStayInCombatArea };
		static constexpr auto VTABLE{ VTABLE::CombatGoalStayInCombatArea };

		CombatGoalStayInCombatArea* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalStayInCombatArea*(__thiscall*)(CombatGoalStayInCombatArea*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalStayInCombatArea::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalStayInCombatArea) == 0x1C);
}
