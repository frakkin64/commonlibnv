#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class CSpeedTreeRT_ECollisionObjectType : std::int32_t
	{
		kCO_SPHERE = 0x0,
		kCO_CYLINDER = 0x1,
		kCO_BOX = 0x2,
	};
}
