#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAttackGrenadeFromCover :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackGrenadeFromCover };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackGrenadeFromCover };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;   // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 03

		CombatActionAttackGrenadeFromCover* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackGrenadeFromCover*(__thiscall*)(CombatActionAttackGrenadeFromCover*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackGrenadeFromCover::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackGrenadeFromCover) == 0x2C);
}
