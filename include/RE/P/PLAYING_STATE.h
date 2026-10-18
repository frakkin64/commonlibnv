#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PLAYING_STATE : std::int32_t
	{
		kMOVIE_NOT_PLAYING = 0x0,
		kMOVIE_PLAYING = 0x1,
		kMOVIE_PLAYING_BACKGROUND = 0x2,
	};
}
