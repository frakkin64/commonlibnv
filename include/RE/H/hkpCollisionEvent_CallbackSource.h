#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpCollisionEvent_CallbackSource : std::int32_t
	{
		kSOURCE_A = 0x0,
		kSOURCE_B = 0x1,
		kSOURCE_WORLD = 0x2,
	};
}
