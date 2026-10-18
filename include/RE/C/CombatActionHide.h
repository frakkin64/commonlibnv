#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionHide :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionHide };
		static constexpr auto VTABLE{ VTABLE::CombatActionHide };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;               // 01
		virtual void GetDebugText(char* apDebugText, std::uint32_t aiMaxLength, std::int32_t aiActionValue) override;  // 04

		CombatActionHide* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionHide*(__thiscall*)(CombatActionHide*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionHide::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionHide) == 0x2C);
}
