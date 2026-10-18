#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SimpleCombatStyleData
	{
	public:
		void Endian()
		{
			using func_t = decltype(&SimpleCombatStyleData::Endian);
			static REL::Relocation<func_t> func{ Offsets::SimpleCombatStyleData::Endian };
			func(this);
		}

	public:
		// members
		float        fCoverSearchRadius;           // 00
		float        fCoverChance;                 // 04
		float        fCoverWaitTimerMin;           // 08
		float        fCoverWaitTimerMax;           // 0C
		float        fCoverWaitToFireTimerMin;     // 10
		float        fCoverWaitToFireTimerMax;     // 14
		float        fCoverFireTimerMin;           // 18
		float        fCoverFireTimerMax;           // 1C
		float        fWeaponMinRangeMult;          // 20
		float        fClusterDistance;             // 24
		char         cWeaponRestrictions;          // 28
		std::uint8_t pad29[0x3];                   // 29
		float        fWeaponMaxRangeMult;          // 2C
		float        fTargetingFOV;                // 30
		float        fCombatRadius;                // 34
		float        fSemiAutoFiringDelayMinMult;  // 38
		float        fSemiAutoFiringDelayMaxMult;  // 3C
	};
	static_assert(sizeof(SimpleCombatStyleData) == 0x40);
}
