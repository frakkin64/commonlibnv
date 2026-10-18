#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSProjectile;
	class TESForm;

	class AMMO_DATA_NV
	{
	public:
		void Endian()
		{
			using func_t = decltype(&AMMO_DATA_NV::Endian);
			static REL::Relocation<func_t> func{ Offsets::AMMO_DATA_NV::Endian };
			func(this);
		}

	public:
		// members
		std::uint8_t   cProjectilePerAmmo;   // 00
		std::uint8_t   pad01[0x3];           // 01
		BGSProjectile* pProjectileOverride;  // 04
		float          fWeightOverride;      // 08
		TESForm*       pAmmoConsumedObject;  // 0C
		float          fAmmoConsumedChance;  // 10
	};
	static_assert(sizeof(AMMO_DATA_NV) == 0x14);
}
