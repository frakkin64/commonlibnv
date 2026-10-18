#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal.h"
#include "RE/C/CombatGoal_COMBAT_GOAL.h"

namespace RE
{
	class CombatGoalAmbush :
		public CombatGoal  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoalAmbush };
		static constexpr auto VTABLE{ VTABLE::CombatGoalAmbush };

		CombatGoalAmbush* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoalAmbush*(__thiscall*)(CombatGoalAmbush*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoalAmbush::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGoalAmbush) == 0x1C);
}
