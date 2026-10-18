#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAttackRangedExplosive :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackRangedExplosive };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackRangedExplosive };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;   // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 03

		CombatActionAttackRangedExplosive* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackRangedExplosive*(__thiscall*)(CombatActionAttackRangedExplosive*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackRangedExplosive::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackRangedExplosive) == 0x2C);
}
