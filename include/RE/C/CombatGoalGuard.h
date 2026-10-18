#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalGuard :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalGuard };
		static constexpr auto VTABLE{ VTABLE::CombatGoalGuard };

		CombatGoalGuard* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalGuard*(__thiscall*)(CombatGoalGuard*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalGuard::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalGuard) == 0x1C);
}
