#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/I/INFO_LINK_ELEMENT.h"
#include "RE/T/TopicInfoArray.h"

namespace RE
{
	class TESQuest;

	class QUEST_INFO
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(QUEST_INFO*);
			static REL::Relocation<func_t> func{ Offsets::QUEST_INFO::dtor };
			func(this);
		}

	public:
		// members
		TESQuest*                              pQuest;         // 00
		TopicInfoArray                         infoArray;      // 04
		BSSimpleArray<INFO_LINK_ELEMENT, 1024> infoLinkArray;  // 1C
		TESQuest*                              pRemovedQuest;  // 2C
		bool                                   bInitialized;   // 30
		std::uint8_t                           pad31[0x3];     // 31
	};
	static_assert(sizeof(QUEST_INFO) == 0x34);
}
