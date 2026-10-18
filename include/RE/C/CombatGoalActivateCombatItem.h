#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalActivateCombatItem :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalActivateCombatItem };
		static constexpr auto VTABLE{ VTABLE::CombatGoalActivateCombatItem };

		CombatGoalActivateCombatItem* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalActivateCombatItem*(__thiscall*)(CombatGoalActivateCombatItem*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalActivateCombatItem::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalActivateCombatItem) == 0x1C);
}
