#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGroupStrategy.h"
#include "RE/C/CombatGroupStrategy_COMBAT_GROUP_STRATEGY.h"

namespace RE
{
	class CombatGroup;
	class CombatGroupData;

	class CombatGroupStrategyAdvance :
		public CombatGroupStrategy  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGroupStrategyAdvance };
		static constexpr auto VTABLE{ VTABLE::CombatGroupStrategyAdvance };

		// override (CombatGroupStrategy)
		virtual bool CanExecute(CombatGroup* apGroup, CombatGroupData* apGroupData) override;  // 00
		virtual void Execute(CombatGroup* apGroup, CombatGroupData* apGroupData) override;     // 01
		virtual bool Update(CombatGroup* apGroup) override;                                    // 02

		CombatGroupStrategyAdvance* ctor(CombatGroupStrategy_COMBAT_GROUP_STRATEGY aeType)
		{
			using func_t = CombatGroupStrategyAdvance*(__thiscall*)(CombatGroupStrategyAdvance*, CombatGroupStrategy_COMBAT_GROUP_STRATEGY);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupStrategyAdvance::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGroupStrategyAdvance) == 0x8);
}
