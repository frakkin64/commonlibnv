#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAttackHandToHand :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackHandToHand };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackHandToHand };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;   // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 03

		CombatActionAttackHandToHand* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackHandToHand*(__thiscall*)(CombatActionAttackHandToHand*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackHandToHand::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackHandToHand) == 0x2C);
}
