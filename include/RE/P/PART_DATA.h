#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSDebris;
	class BGSExplosion;
	class BGSImpactDataSet;

	class PART_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&PART_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::PART_DATA::Endian };
			func(this);
		}

	public:
		// members
		float             fDamageMult;                   // 00
		std::uint8_t      cFlags;                        // 04
		std::uint8_t      cType;                         // 05
		std::uint8_t      cHealthPercent;                // 06
		char              cActorValue;                   // 07
		std::uint8_t      cToHitChance;                  // 08
		std::uint8_t      cExplosionChance;              // 09
		std::uint8_t      cExplosionGenericDebrisCount;  // 0A
		std::uint8_t      pad0B;                         // 0B
		BGSDebris*        pExplosionGenericDebris;       // 0C
		BGSExplosion*     pExplosion;                    // 10
		float             fTrackingMaxAngle;             // 14
		float             fExplosionGenericDebrisScale;  // 18
		std::uint8_t      cDismemberGenericDebrisCount;  // 1C
		std::uint8_t      pad1D[0x3];                    // 1D
		BGSDebris*        pDismemberGenericDebris;       // 20
		BGSExplosion*     pDismemberExplosion;           // 24
		float             fDismemberGenericDebrisScale;  // 28
		NiPoint3          kGoreTranslate;                // 2C
		NiPoint3          kGoreRotate;                   // 38
		BGSImpactDataSet* pDismemberImpactDataSet;       // 44
		BGSImpactDataSet* pExplosionImpactDataSet;       // 48
		std::uint8_t      cDismemberDecalCount;          // 4C
		std::uint8_t      cExplosionDecalCount;          // 4D
		std::uint16_t     pad4E;                         // 4E
		float             fExplosionSpecialDebrisScale;  // 50
	};
	static_assert(sizeof(PART_DATA) == 0x54);
}
