#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FONTS.h"
#include "RE/Q/QuestUpdateManager_HUD_CUSTOM_QUEST_QUEUE_PRIORITY.h"
#include "RE/Q/QuestUpdateManager_HUD_CUSTOM_QUEST_TEXT_JUSTIFICATION.h"

namespace RE
{
	class QuestUpdateManager
	{
	public:
		using HUD_CUSTOM_QUEST_QUEUE_PRIORITY = QuestUpdateManager_HUD_CUSTOM_QUEST_QUEUE_PRIORITY;
		using HUD_CUSTOM_QUEST_TEXT_JUSTIFICATION = QuestUpdateManager_HUD_CUSTOM_QUEST_TEXT_JUSTIFICATION;

		static void SetCustomQuestText(char const* a_arg1, char const* a_arg2, QuestUpdateManager_HUD_CUSTOM_QUEST_QUEUE_PRIORITY aiCustomQueuePriority, QuestUpdateManager_HUD_CUSTOM_QUEST_TEXT_JUSTIFICATION a_arg4, FONTS aiCustomTextTitleFont, FONTS aiCustomTextSubtitleFont, char const* a_arg7)
		{
			using func_t = decltype(&QuestUpdateManager::SetCustomQuestText);
			static REL::Relocation<func_t> func{ Offsets::QuestUpdateManager::SetCustomQuestText };
			func(a_arg1, a_arg2, aiCustomQueuePriority, a_arg4, aiCustomTextTitleFont, aiCustomTextSubtitleFont, a_arg7);
		}
	};
}
