#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionSearch :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionSearch };
		static constexpr auto VTABLE{ VTABLE::CombatActionSearch };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 01

		CombatActionSearch* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionSearch*(__thiscall*)(CombatActionSearch*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionSearch::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionSearch) == 0x2C);
}
