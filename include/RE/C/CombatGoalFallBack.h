#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalFallBack :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalFallBack };
		static constexpr auto VTABLE{ VTABLE::CombatGoalFallBack };

		CombatGoalFallBack* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalFallBack*(__thiscall*)(CombatGoalFallBack*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalFallBack::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalFallBack) == 0x1C);
}
