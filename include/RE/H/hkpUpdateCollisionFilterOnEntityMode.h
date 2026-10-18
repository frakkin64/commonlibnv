#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpUpdateCollisionFilterOnEntityMode : std::int32_t
	{
		kHK_UPDATE_FILTER_ON_ENTITY_FULL_CHECK = 0x0,
		kHK_UPDATE_FILTER_ON_ENTITY_DISABLE_ENTITY_ENTITY_COLLISIONS_ONLY = 0x1,
	};
}
