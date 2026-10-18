#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class PACK_USE_WEAPON_DATA_PKW3
	{
	public:
		void Endian()
		{
			using func_t = decltype(&PACK_USE_WEAPON_DATA_PKW3::Endian);
			static REL::Relocation<func_t> func{ Offsets::PACK_USE_WEAPON_DATA_PKW3::Endian };
			func(this);
		}

	public:
		// members
		bool          bAlwaysHit;       // 00
		bool          bDoNoDamage;      // 01
		bool          bCrouch;          // 02
		bool          bHoldFire;        // 03
		bool          bVolleyFire;      // 04
		bool          bRepeatFire;      // 05
		std::uint16_t sBurstCount;      // 06
		std::uint16_t sVolleyShotsMin;  // 08
		std::uint16_t sVolleyShotsMax;  // 0A
		float         fVolleyWaitMin;   // 0C
		float         fVolleyWaitMax;   // 10
		std::uint32_t iWeapon;          // 14
	};
	static_assert(sizeof(PACK_USE_WEAPON_DATA_PKW3) == 0x18);
}
