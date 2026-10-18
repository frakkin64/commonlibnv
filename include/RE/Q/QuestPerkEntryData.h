#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESQuest;

	class QuestPerkEntryData
	{
	public:
		// members
		TESQuest*    pQuest;       // 00
		std::uint8_t cQuestStage;  // 04
		std::uint8_t pad05[0x3];   // 05
	};
	static_assert(sizeof(QuestPerkEntryData) == 0x8);
}
