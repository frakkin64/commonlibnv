#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGroupStrategy.h"
#include "RE/C/CombatGroupStrategy_COMBAT_GROUP_STRATEGY.h"

namespace RE
{
	class CombatGroup;
	class CombatGroupData;

	class CombatGroupStrategyFallBack :
		public CombatGroupStrategy  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGroupStrategyFallBack };
		static constexpr auto VTABLE{ VTABLE::CombatGroupStrategyFallBack };

		// override (CombatGroupStrategy)
		virtual bool CanExecute(CombatGroup* apGroup, CombatGroupData* apGroupData) override;  // 00
		virtual void Execute(CombatGroup* apGroup, CombatGroupData* apGroupData) override;     // 01
		virtual bool Update(CombatGroup* apGroup) override;                                    // 02

		CombatGroupStrategyFallBack* ctor(CombatGroupStrategy_COMBAT_GROUP_STRATEGY aeType)
		{
			using func_t = CombatGroupStrategyFallBack*(__thiscall*)(CombatGroupStrategyFallBack*, CombatGroupStrategy_COMBAT_GROUP_STRATEGY);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupStrategyFallBack::ctor };
			return func(this, aeType);
		}
	};
	static_assert(sizeof(CombatGroupStrategyFallBack) == 0x8);
}
