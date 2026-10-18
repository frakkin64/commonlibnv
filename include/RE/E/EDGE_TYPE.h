#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class EDGE_TYPE : std::int32_t
	{
		kEDGE_TYPE_TWOSIDED = 0x0,
		kEDGE_TYPE_OBSTACLE = 0x1,
		kEDGE_TYPE_BOUNDS = 0x2,
		kEDGE_TYPE_OPEN = 0x3,
		kEDGE_TYPE_PORTAL = 0x4,
	};
}
