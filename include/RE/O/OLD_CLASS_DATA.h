#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"

namespace RE
{
	class OLD_CLASS_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&OLD_CLASS_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::OLD_CLASS_DATA::Endian };
			func(this);
		}

	public:
		// members
		ActorValue_Index eTagSkills[3];   // 00
		char             cClassFlags;     // 0C
		std::uint8_t     pad0D[0x3];      // 0D
		std::int32_t     iServiceFlags;   // 10
		std::uint8_t     cTrainingSkill;  // 14
		std::uint8_t     cTrainingLevel;  // 15
		std::uint16_t    pad16;           // 16
	};
	static_assert(sizeof(OLD_CLASS_DATA) == 0x18);
}
