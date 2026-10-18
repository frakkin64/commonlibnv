#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionIgnoreBlockedTarget :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionIgnoreBlockedTarget };
		static constexpr auto VTABLE{ VTABLE::CombatActionIgnoreBlockedTarget };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 01

		CombatActionIgnoreBlockedTarget* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionIgnoreBlockedTarget*(__thiscall*)(CombatActionIgnoreBlockedTarget*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionIgnoreBlockedTarget::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionIgnoreBlockedTarget) == 0x2C);
}
