#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ModifierList_ClampStyle : std::int32_t
	{
		kLE_ZERO = 0x0,
		kGE_ZERO = 0x1,
		kNO_CLAMP = 0x2,
	};
}
