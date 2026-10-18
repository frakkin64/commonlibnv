#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatActionAttackGrenade.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;
	class CombatWorldStateArray;

	class CombatActionMoveAndAttackGrenade :
		public CombatActionAttackGrenade  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionMoveAndAttackGrenade };
		static constexpr auto VTABLE{ VTABLE::CombatActionMoveAndAttackGrenade };

		// override (CombatActionAttackGrenade)
		virtual bool CanExecute(CombatController* apCombatController, CombatWorldStateArray* apWorldStateArray, std::int32_t aiActionValue) override;  // 00
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;                                               // 01
		virtual bool CheckIdentical(CombatController* apCombatController, std::int32_t aiActionValue) override;                                        // 02
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;                                              // 03
		virtual void GetDebugText(char* apDebugText, std::uint32_t aiMaxLength, std::int32_t aiActionValue) override;                                  // 04

		CombatActionMoveAndAttackGrenade* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionMoveAndAttackGrenade*(__thiscall*)(CombatActionMoveAndAttackGrenade*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionMoveAndAttackGrenade::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionMoveAndAttackGrenade) == 0x2C);
}
