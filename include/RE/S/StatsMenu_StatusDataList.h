#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class ActiveEffect;
	class EffectItem;
	class EffectItemData;

	class __declspec(novtable) StatsMenu_StatusDataList :
		public BSSimpleList<EffectItemData*>  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::StatsMenu_StatusDataList };
		static constexpr auto VTABLE{ VTABLE::StatsMenu_StatusDataList };

		// add
		virtual ~StatsMenu_StatusDataList() = default;  // 00

		StatsMenu_StatusDataList* ctor()
		{
			using func_t = StatsMenu_StatusDataList*(__thiscall*)(StatsMenu_StatusDataList*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_StatusDataList::ctor };
			return func(this);
		}

		void Register(ActiveEffect* apActiveEffect)
		{
			using func_t = void (StatsMenu_StatusDataList::*)(ActiveEffect*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_StatusDataList::Register };
			func(this, apActiveEffect);
		}

		void Register(EffectItem* apEffectItem)
		{
			using func_t = void (StatsMenu_StatusDataList::*)(EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_StatusDataList::Register_1 };
			func(this, apEffectItem);
		}
	};
}
