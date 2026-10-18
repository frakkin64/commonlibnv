#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NOTE_TYPE : std::int32_t
	{
		kNT_SOUND = 0x0,
		kNT_TEXT = 0x1,
		kNT_IMAGE = 0x2,
		kNT_VOICE = 0x3,
		kNT_COUNT = 0x4,
	};
}
