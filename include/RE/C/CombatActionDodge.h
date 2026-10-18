#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionDodge :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionDodge };
		static constexpr auto VTABLE{ VTABLE::CombatActionDodge };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 01

		CombatActionDodge* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionDodge*(__thiscall*)(CombatActionDodge*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionDodge::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionDodge) == 0x2C);
}
