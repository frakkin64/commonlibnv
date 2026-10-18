#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SKILL_BONUS.h"

namespace RE
{
	class RACE_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&RACE_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::RACE_DATA::Endian };
			func(this);
		}

	public:
		// members
		SKILL_BONUS   eSkillBonus[7];  // 00
		std::uint16_t pad0E;           // 0E
		float         fHeight[2];      // 10
		float         fWeight[2];      // 18
		std::int32_t  iFlags;          // 20
	};
	static_assert(sizeof(RACE_DATA) == 0x24);
}
