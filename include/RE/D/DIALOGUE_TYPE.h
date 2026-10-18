#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class DIALOGUE_TYPE : std::int32_t
	{
		kDT_TOPIC = 0x0,
		kDT_CONVERSATION = 0x1,
		kDT_COMBAT = 0x2,
		kDT_PERSUASION = 0x3,
		kDT_DETECTION = 0x4,
		kDT_SERVICE = 0x5,
		kDT_MISCELLANEOUS = 0x6,
		kDT_RADIO = 0x7,
		kDIALOGUE_TYPE_COUNT = 0x8,
	};
}
