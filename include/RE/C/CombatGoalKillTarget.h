#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalKillTarget :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalKillTarget };
		static constexpr auto VTABLE{ VTABLE::CombatGoalKillTarget };

		CombatGoalKillTarget* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalKillTarget*(__thiscall*)(CombatGoalKillTarget*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalKillTarget::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalKillTarget) == 0x1C);
}
