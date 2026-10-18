#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CachedValues_Flags.h"

namespace RE
{
	class CachedValues
	{
	public:
		using Flags = CachedValues_Flags;

		void SetUpToDate(CachedValues_Flags aiFlag)
		{
			using func_t = decltype(&CachedValues::SetUpToDate);
			static REL::Relocation<func_t> func{ Offsets::CachedValues::SetUpToDate };
			func(this, aiFlag);
		}

		bool IsDirty(CachedValues_Flags aiFlag)
		{
			using func_t = decltype(&CachedValues::IsDirty);
			static REL::Relocation<func_t> func{ Offsets::CachedValues::IsDirty };
			return func(this, aiFlag);
		}

	public:
		// members
		float         fCachedRadius;                     // 00
		float         fCachedWidth;                      // 04
		float         fCachedLength;                     // 08
		float         fCachedForwardLength;              // 0C
		float         fCachedWeaponDPS;                  // 10
		float         fCachedMedicineEffectivenessMult;  // 14
		float         fCachedSurvivalEffectivenessMult;  // 18
		float         fCachedParalysis;                  // 1C
		float         fCachedHealingRate;                // 20
		float         fCachedEndurance;                  // 24
		float         fCachedPerceptionCondition;        // 28
		float         fCachedEyeLevel;                   // 2C
		std::int32_t  eCachedActorAggression;            // 30
		std::int32_t  eCachedActorAssistance;            // 34
		float         fCachedWalkSpeed;                  // 38
		float         fCachedRunSpeed;                   // 3C
		bool          bConditionPreventsRun;             // 40
		std::uint8_t  pad41[0x3];                        // 41
		std::uint32_t iFlags;                            // 44
	};
}
