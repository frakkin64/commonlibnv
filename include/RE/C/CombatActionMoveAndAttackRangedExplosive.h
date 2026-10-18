#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatActionAttackRangedExplosive.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;
	class CombatWorldStateArray;

	class CombatActionMoveAndAttackRangedExplosive :
		public CombatActionAttackRangedExplosive  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionMoveAndAttackRangedExplosive };
		static constexpr auto VTABLE{ VTABLE::CombatActionMoveAndAttackRangedExplosive };

		// override (CombatActionAttackRangedExplosive)
		virtual bool CanExecute(CombatController* apCombatController, CombatWorldStateArray* apWorldStateArray, std::int32_t aiActionValue) override;  // 00
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;                                               // 01
		virtual bool CheckIdentical(CombatController* apCombatController, std::int32_t aiActionValue) override;                                        // 02
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;                                              // 03
		virtual void GetDebugText(char* apDebugText, std::uint32_t aiMaxLength, std::int32_t aiActionValue) override;                                  // 04

		CombatActionMoveAndAttackRangedExplosive* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionMoveAndAttackRangedExplosive*(__thiscall*)(CombatActionMoveAndAttackRangedExplosive*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionMoveAndAttackRangedExplosive::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatActionMoveAndAttackRangedExplosive) == 0x2C);
}
