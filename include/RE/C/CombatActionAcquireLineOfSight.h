#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;

	class CombatActionAcquireLineOfSight :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionAcquireLineOfSight };
		static constexpr auto VTABLE{ VTABLE::CombatActionAcquireLineOfSight };

		// override (CombatAction)
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;  // 01

		CombatActionAcquireLineOfSight* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionAcquireLineOfSight*(__thiscall*)(CombatActionAcquireLineOfSight*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionAcquireLineOfSight::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionAcquireLineOfSight) == 0x2C);
}
