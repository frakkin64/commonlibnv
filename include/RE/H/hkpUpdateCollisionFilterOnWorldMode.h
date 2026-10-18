#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpUpdateCollisionFilterOnWorldMode : std::int32_t
	{
		kHK_UPDATE_FILTER_ON_WORLD_FULL_CHECK = 0x0,
		kHK_UPDATE_FILTER_ON_WORLD_DISABLE_ENTITY_ENTITY_COLLISIONS_ONLY = 0x1,
	};
}
