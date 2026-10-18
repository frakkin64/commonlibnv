#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class AMMO_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&AMMO_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::AMMO_DATA::Endian };
			func(this);
		}

	public:
		// members
		float        fSpeed;      // 00
		std::uint8_t cFlags;      // 04
		std::uint8_t pad05[0x3];  // 05
	};
}
