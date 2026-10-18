#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalUseCombatItem :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalUseCombatItem };
		static constexpr auto VTABLE{ VTABLE::CombatGoalUseCombatItem };

		CombatGoalUseCombatItem* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalUseCombatItem*(__thiscall*)(CombatGoalUseCombatItem*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalUseCombatItem::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalUseCombatItem) == 0x1C);
}
