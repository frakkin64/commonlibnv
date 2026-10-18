#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionInvestigate :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionInvestigate };
		static constexpr auto VTABLE{ VTABLE::CombatActionInvestigate };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 01

		CombatActionInvestigate* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionInvestigate*(__thiscall*)(CombatActionInvestigate*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionInvestigate::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionInvestigate) == 0x2C);
}
