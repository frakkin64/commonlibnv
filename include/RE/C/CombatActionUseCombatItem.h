#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionUseCombatItem :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionUseCombatItem };
		static constexpr auto VTABLE{ VTABLE::CombatActionUseCombatItem };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;               // 01
		virtual void GetDebugText(char* apDebugText, std::uint32_t aiMaxLength, std::int32_t aiActionValue) override;  // 04

		CombatActionUseCombatItem* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionUseCombatItem*(__thiscall*)(CombatActionUseCombatItem*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionUseCombatItem::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionUseCombatItem) == 0x2C);
}
