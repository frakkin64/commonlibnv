#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) CachedValuesOwner
	{
	public:
		static constexpr auto RTTI{ RTTI::CachedValuesOwner };
		static constexpr auto VTABLE{ VTABLE::CachedValuesOwner };

		// add
		virtual float CalculateCachedRadius();                     // 00
		virtual float CalculateCachedWidth();                      // 01
		virtual float CalculateCachedLength();                     // 02
		virtual float CalculateCachedForwardLength();              // 03
		virtual float CalculateCachedWeaponDPS();                  // 04
		virtual float CalculateCachedMedicineEffectivenessMult();  // 05
		virtual float CalculateCachedSurvivalEffectivenessMult();  // 06
		virtual float CalculateCachedParalysis();                  // 07
		virtual float CalculateCachedHealingRate();                // 08
		virtual float CalculateCachedEndurance();                  // 09
		virtual float CalculateCachedPerceptionCondition();        // 0A
		virtual float CalculateCachedEyeLevel();                   // 0B
		virtual std::int32_t CalculateCachedActorAggression();     // 0C
		virtual std::int32_t CalculateCachedActorAssistance();     // 0D
		virtual float CalculateCachedWalkSpeed();                  // 0E
		virtual float CalculateCachedRunSpeed();                   // 0F
		virtual bool CalculateCachedConditionPreventsRun();        // 10

		CachedValuesOwner* ctor()
		{
			using func_t = CachedValuesOwner*(__thiscall*)(CachedValuesOwner*);
			static REL::Relocation<func_t> func{ Offsets::CachedValuesOwner::ctor };
			return func(this);
		}
	};
}
