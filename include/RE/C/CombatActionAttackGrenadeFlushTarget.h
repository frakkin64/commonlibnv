#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;
	class CombatWorldStateArray;

	class CombatActionAttackGrenadeFlushTarget :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAttackGrenadeFlushTarget };
		static constexpr auto VTABLE{ VTABLE::CombatActionAttackGrenadeFlushTarget };

		// override (CombatAction)
		virtual bool CanExecute(CombatController* apCombatController, CombatWorldStateArray* apWorldStateArray, std::int32_t aiActionValue) override;  // 00
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;                                               // 01
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;                                              // 03

		CombatActionAttackGrenadeFlushTarget* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAttackGrenadeFlushTarget*(__thiscall*)(CombatActionAttackGrenadeFlushTarget*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAttackGrenadeFlushTarget::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAttackGrenadeFlushTarget) == 0x2C);
}
