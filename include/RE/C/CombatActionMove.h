#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatAction.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"

namespace RE
{
	class CombatController;
	class CombatWorldStateArray;

	class CombatActionMove :
		public CombatAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatActionMove };
		static constexpr auto VTABLE{ VTABLE::CombatActionMove };

		// override (CombatAction)
		virtual bool CanExecute(CombatController* apCombatController, CombatWorldStateArray* apWorldStateArray, std::int32_t aiActionValue) override;  // 00
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue) override;                                               // 01
		virtual bool CheckIdentical(CombatController* apCombatController, std::int32_t aiActionValue) override;                                        // 02
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue) override;                                              // 03
		virtual void GetDebugText(char* apDebugText, std::uint32_t aiMaxLength, std::int32_t aiActionValue) override;                                  // 04

		CombatActionMove* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatActionMove*(__thiscall*)(CombatActionMove*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatActionMove::ctor };
			return func(this, aeType);
		}

		static bool ChooseLocation(CombatController* apCombatController, CombatWorldStateArray* apWorldStateArray, std::int32_t aiLocation)
		{
			using func_t = decltype(&CombatActionMove::ChooseLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatActionMove::ChooseLocation };
			return func(apCombatController, apWorldStateArray, aiLocation);
		}

		static void StartMovementProcedure(CombatController* apCombatController, std::int32_t aiLocation)
		{
			using func_t = decltype(&CombatActionMove::StartMovementProcedure);
			static REL::Relocation<func_t> func{ Offsets::CombatActionMove::StartMovementProcedure };
			func(apCombatController, aiLocation);
		}
	};
	static_assert(sizeof(CombatActionMove) == 0x2C);
}
