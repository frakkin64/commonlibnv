#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class ActiveEffect;
	class StatsMenu_StatusEffect;

	class __declspec(novtable) StatsMenu_StatusEffectList :
		public BSSimpleList<StatsMenu_StatusEffect*>  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::StatsMenu_StatusEffectList };
		static constexpr auto VTABLE{ VTABLE::StatsMenu_StatusEffectList };

		// add
		virtual ~StatsMenu_StatusEffectList() = default;  // 00

		StatsMenu_StatusEffectList* ctor()
		{
			using func_t = StatsMenu_StatusEffectList*(__thiscall*)(StatsMenu_StatusEffectList*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_StatusEffectList::ctor };
			return func(this);
		}

		void Register(ActiveEffect* apActiveEffect)
		{
			using func_t = decltype(&StatsMenu_StatusEffectList::Register);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_StatusEffectList::Register };
			func(this, apActiveEffect);
		}
	};
}
