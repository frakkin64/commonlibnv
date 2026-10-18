#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ACTOR_BASE_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&ACTOR_BASE_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::ACTOR_BASE_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::int32_t  iActorBaseFlags;    // 00
		std::uint16_t usFatigue;          // 04
		std::uint16_t usBartergold;       // 06
		std::uint16_t sLevel;             // 08
		std::uint16_t usCalcLevelMin;     // 0A
		std::uint16_t usCalcLevelMax;     // 0C
		std::uint16_t usSpeedMult;        // 0E
		float         fKarma;             // 10
		std::uint16_t usBaseDisposition;  // 14
		std::uint16_t sTemplateUseFlags;  // 16
	};
	static_assert(sizeof(ACTOR_BASE_DATA) == 0x18);
}
