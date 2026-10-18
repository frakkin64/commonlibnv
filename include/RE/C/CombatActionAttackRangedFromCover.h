#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAttackRangedFromCover :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackRangedFromCover };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackRangedFromCover };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;   // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 03

		CombatActionAttackRangedFromCover* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackRangedFromCover*(__thiscall*)(CombatActionAttackRangedFromCover*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackRangedFromCover::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackRangedFromCover) == 0x2C);
}
