#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAttackMelee :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackMelee };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackMelee };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;   // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 03

		CombatActionAttackMelee* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackMelee*(__thiscall*)(CombatActionAttackMelee*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackMelee::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackMelee) == 0x2C);
}
