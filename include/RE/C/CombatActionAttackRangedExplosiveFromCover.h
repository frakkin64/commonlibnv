#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAttackRangedExplosiveFromCover :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackRangedExplosiveFromCover };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackRangedExplosiveFromCover };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;   // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 03

		CombatActionAttackRangedExplosiveFromCover* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackRangedExplosiveFromCover*(__thiscall*)(CombatActionAttackRangedExplosiveFromCover*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackRangedExplosiveFromCover::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackRangedExplosiveFromCover) == 0x2C);
}
