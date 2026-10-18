#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatActionMove.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionMoveAndSwitchToMelee :
		public CombatActionMove  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionMoveAndSwitchToMelee };
		static constexpr auto VTABLE{ VTABLE::CombatActionMoveAndSwitchToMelee };

		// override (CombatActionMove)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 01

		CombatActionMoveAndSwitchToMelee* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionMoveAndSwitchToMelee*(__thiscall*)(CombatActionMoveAndSwitchToMelee*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionMoveAndSwitchToMelee::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionMoveAndSwitchToMelee) == 0x2C);
}
