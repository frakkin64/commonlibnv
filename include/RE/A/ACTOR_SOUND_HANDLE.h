#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ACTOR_SOUND_HANDLE : std::int32_t
	{
		kACTOR_SOUND_HANDLE_VOICE = 0x0,
		kACTOR_SOUND_HANDLE_TORCH = 0x1,
		kACTOR_SOUND_HANDLE_COUNT = 0x2,
	};
}
