#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class EffectSetting;

	class __declspec(novtable) StatsMenu_NamedEffectsList :
		public BSSimpleList<EffectSetting*>  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::StatsMenu_NamedEffectsList };
		static constexpr auto VTABLE{ VTABLE::StatsMenu_NamedEffectsList };

		// add
		virtual ~StatsMenu_NamedEffectsList() = default;  // 00

		StatsMenu_NamedEffectsList* ctor()
		{
			using func_t = StatsMenu_NamedEffectsList*(__thiscall*)(StatsMenu_NamedEffectsList*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_NamedEffectsList::ctor };
			return func(this);
		}
	};
}
