#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionApproachTarget :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionApproachTarget };
		static constexpr auto VTABLE{ VTABLE::CombatActionApproachTarget };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 01

		CombatActionApproachTarget* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionApproachTarget*(__thiscall*)(CombatActionApproachTarget*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionApproachTarget::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionApproachTarget) == 0x2C);
}
