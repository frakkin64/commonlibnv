#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGoal_COMBAT_GOAL.h"
#include "RE/C/CombatWorldStateList.h"

namespace RE
{
	class CombatController;
	class CombatWorldStateArray;

	class __declspec(novtable) CombatGoal
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGoal };
		static constexpr auto VTABLE{ VTABLE::CombatGoal };

		using COMBAT_GOAL = CombatGoal_COMBAT_GOAL;

		// add
		virtual bool IsActive(CombatWorldStateArray* apWorldStateArray);                                                   // 00
		virtual void CombatPlannerFailed(CombatController* apCombatController, CombatWorldStateArray* apWorldStateArray);  // 01

		static CombatGoal* CreateCombatGoal(CombatGoal_COMBAT_GOAL aeCombatGoal)
		{
			using func_t = decltype(&CombatGoal::CreateCombatGoal);
			static REL::Relocation<func_t> func{ Offsets::CombatGoal::CreateCombatGoal };
			return func(aeCombatGoal);
		}

		CombatGoal* ctor(CombatGoal_COMBAT_GOAL aeType)
		{
			using func_t = CombatGoal*(__thiscall*)(CombatGoal*, CombatGoal_COMBAT_GOAL);
			static REL::Relocation<func_t> func{ Offsets::CombatGoal::ctor };
			return func(this, aeType);
		}

	public:
		// members
		CombatWorldStateList   ActivationConditions;      // 04?
		CombatWorldStateList   GoalStates;                // 0C?
		CombatGoal_COMBAT_GOAL eType;                     // 14
		std::uint32_t          iGroupStrategyAssignment;  // 18
	};
}
