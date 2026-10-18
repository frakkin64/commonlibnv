#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpCollidableAccept : std::int32_t
	{
		kHK_COLLIDABLE_ACCEPT = 0x0,
		kHK_COLLIDABLE_REJECT = 0x1,
	};
}
