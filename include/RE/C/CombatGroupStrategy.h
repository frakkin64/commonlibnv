#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CombatGroupStrategy_COMBAT_GROUP_STRATEGY.h"

namespace RE
{
	class CombatGroup;
	class CombatGroupData;

	class __declspec(novtable) CombatGroupStrategy
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatGroupStrategy };
		static constexpr auto VTABLE{ VTABLE::CombatGroupStrategy };

		using COMBAT_GROUP_STRATEGY = CombatGroupStrategy_COMBAT_GROUP_STRATEGY;

		// add
		virtual bool CanExecute(CombatGroup* apGroup, CombatGroupData* apGroupData);  // 00
		virtual void Execute(CombatGroup* apGroup, CombatGroupData* apGroupData);     // 01
		virtual bool Update(CombatGroup* apGroup);                                    // 02

		static CombatGroupStrategy* GetCombatGroupStrategy(std::uint32_t aiIndex)
		{
			using func_t = decltype(&CombatGroupStrategy::GetCombatGroupStrategy);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupStrategy::GetCombatGroupStrategy };
			return func(aiIndex);
		}

		static CombatGroupStrategy* CreateCombatGroupStrategy(CombatGroupStrategy_COMBAT_GROUP_STRATEGY aeCombatGroupStrategy)
		{
			using func_t = decltype(&CombatGroupStrategy::CreateCombatGroupStrategy);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupStrategy::CreateCombatGroupStrategy };
			return func(aeCombatGroupStrategy);
		}

		CombatGroupStrategy* ctor(CombatGroupStrategy_COMBAT_GROUP_STRATEGY aeType)
		{
			using func_t = CombatGroupStrategy*(__thiscall*)(CombatGroupStrategy*, CombatGroupStrategy_COMBAT_GROUP_STRATEGY);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupStrategy::ctor };
			return func(this, aeType);
		}

		static CombatGroupStrategy* FindCombatGroupStrategy(CombatGroup* apGroup)
		{
			using func_t = decltype(&CombatGroupStrategy::FindCombatGroupStrategy);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupStrategy::FindCombatGroupStrategy };
			return func(apGroup);
		}

		static CombatGroupStrategy* GetCombatGroupStrategyByName(char const* apName)
		{
			using func_t = decltype(&CombatGroupStrategy::GetCombatGroupStrategyByName);
			static REL::Relocation<func_t> func{ Offsets::CombatGroupStrategy::GetCombatGroupStrategyByName };
			return func(apName);
		}

	public:
		// members
		CombatGroupStrategy_COMBAT_GROUP_STRATEGY eType;  // 04
	};
}
