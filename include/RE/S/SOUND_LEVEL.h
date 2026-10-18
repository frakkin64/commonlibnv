#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SOUND_LEVEL : std::int32_t
	{
		kSOUND_LEVEL_LOUD = 0x0,
		kSOUND_LEVEL_NORMAL = 0x1,
		kSOUND_LEVEL_SILENT = 0x2,
		kSOUND_LEVEL_COUNT = 0x3,
	};
}
