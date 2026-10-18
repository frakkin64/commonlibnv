#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/StatsMenu_NamedEffectsList.h"
#include "RE/S/StatsMenu_StatusDataList.h"

namespace RE
{
	class TESForm;

	class StatsMenu_StatusEffect
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(StatsMenu_StatusEffect*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_StatusEffect::dtor };
			func(this);
		}

		StatsMenu_StatusEffect* ctor(TESForm* apForm)
		{
			using func_t = StatsMenu_StatusEffect*(__thiscall*)(StatsMenu_StatusEffect*, TESForm*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_StatusEffect::ctor };
			return func(this, apForm);
		}

	public:
		// members
		TESForm*                   pEffectForm;     // 00
		StatsMenu_StatusDataList   xStatsEffected;  // 04
		StatsMenu_NamedEffectsList xNamedEffects;   // 10
	};
}
