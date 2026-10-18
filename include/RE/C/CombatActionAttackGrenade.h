#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAttackGrenade :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackGrenade };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackGrenade };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;   // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 03

		CombatActionAttackGrenade* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackGrenade*(__thiscall*)(CombatActionAttackGrenade*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackGrenade::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackGrenade) == 0x2C);
}
