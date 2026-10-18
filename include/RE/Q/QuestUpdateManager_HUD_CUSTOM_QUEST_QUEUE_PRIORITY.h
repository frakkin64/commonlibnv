#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class QuestUpdateManager_HUD_CUSTOM_QUEST_QUEUE_PRIORITY : std::int32_t
	{
		kHCQQP_NOW = 0x0,
		kHCQQP_NORMAL = 0x1,
		kHCQQP_LAST = 0x2,
	};
}
