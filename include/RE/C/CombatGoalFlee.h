#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalFlee :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalFlee };
		static constexpr auto VTABLE{ VTABLE::CombatGoalFlee };

		CombatGoalFlee* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalFlee*(__thiscall*)(CombatGoalFlee*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalFlee::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalFlee) == 0x1C);
}
