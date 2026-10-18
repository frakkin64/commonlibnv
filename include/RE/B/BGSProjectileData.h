#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSExplosion;
	class TESObjectLIGH;
	class TESObjectWEAP;
	class TESSound;

	class BGSProjectileData
	{
	public:
		void Endian()
		{
			using func_t = decltype(&BGSProjectileData::Endian);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectileData::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t  iFlags;                // 00
		float          fGravity;              // 04
		float          fSpeed;                // 08
		float          fRange;                // 0C
		TESObjectLIGH* pLight;                // 10
		TESObjectLIGH* pMuzzleFlashLight;     // 14
		float          fTracerChance;         // 18
		float          fExplosionProximity;   // 1C
		float          fExplosionTimer;       // 20
		BGSExplosion*  pExplosionType;        // 24
		TESSound*      pActiveSoundLoop;      // 28
		float          fMuzzleFlashDuration;  // 2C
		float          fFadeOutTime;          // 30
		float          fForce;                // 34
		TESSound*      pCountdownSound;       // 38
		TESSound*      pDeactivateSound;      // 3C
		TESObjectWEAP* pDefaultWeaponSource;  // 40
		float          fRotationX;            // 44
		float          fRotationY;            // 48
		float          fRotationZ;            // 4C
		float          fBounceMultiplier;     // 50
	};
	static_assert(sizeof(BGSProjectileData) == 0x54);
}
