#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAttackRanged :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackRanged };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackRanged };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;   // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 03

		CombatActionAttackRanged* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackRanged*(__thiscall*)(CombatActionAttackRanged*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackRanged::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackRanged) == 0x2C);
}
