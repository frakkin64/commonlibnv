#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"

namespace RE
{
	class CLASS_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&CLASS_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::CLASS_DATA::Endian };
			func(this);
		}

	public:
		// members
		ActorValue_Index eTagSkills[4];   // 00
		char             cClassFlags;     // 10
		std::uint8_t     pad11[0x3];      // 11
		std::int32_t     iServiceFlags;   // 14
		std::uint8_t     cTrainingSkill;  // 18
		std::uint8_t     cTrainingLevel;  // 19
		std::uint16_t    pad1A;           // 1A
	};
	static_assert(sizeof(CLASS_DATA) == 0x1C);
}
