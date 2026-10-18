#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SOUND_LEVEL.h"

namespace RE
{
	class BGSImpactDataSet;
	class TESObjectLIGH;
	class TESSound;

	class BGSExplosionData
	{
	public:
		void Endian()
		{
			using func_t = decltype(&BGSExplosionData::Endian);
			static REL::Relocation<func_t> func{ Offsets::BGSExplosionData::Endian };
			func(this);
		}

	public:
		// members
		float             fForce;                     // 00
		float             fDamage;                    // 04
		float             fRadius;                    // 08
		TESObjectLIGH*    pLight;                     // 0C
		TESSound*         pSound1;                    // 10
		std::uint32_t     iFlags;                     // 14
		float             fImageSpaceRadius;          // 18
		BGSImpactDataSet* pImpactDataSet;             // 1C
		TESSound*         pSound2;                    // 20
		float             fRadiationRads;             // 24
		float             fRadiationDissipationTime;  // 28
		float             fRadiationRadius;           // 2C
		SOUND_LEVEL       eSoundLevel;                // 30
	};
	static_assert(sizeof(BGSExplosionData) == 0x34);
}
