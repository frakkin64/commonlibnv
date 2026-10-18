#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatController;
	class CombatWorldStateArray;

	class CombatGoalFlushTarget :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalFlushTarget };
		static constexpr auto VTABLE{ VTABLE::CombatGoalFlushTarget };

		// override (CombatGoal)
		virtual void CombatPlannerFailed(CombatController* apCombatController, CombatWorldStateArray* apWorldStateArray) override;  // 01

		CombatGoalFlushTarget* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalFlushTarget*(__thiscall*)(CombatGoalFlushTarget*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalFlushTarget::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalFlushTarget) == 0x1C);
}
