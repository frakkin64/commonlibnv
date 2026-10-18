#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class QUEST_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&QUEST_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::QUEST_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint8_t  ucFlags;          // 00
		std::uint8_t  ucPriority;       // 01
		std::uint16_t pad02;            // 02
		float         fQuestDelayTime;  // 04
	};
}
