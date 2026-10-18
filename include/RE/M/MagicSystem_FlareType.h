#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class MagicSystem_FlareType : std::int32_t
	{
		kFLARE_NONE = 0x0,
		kFLARE_FIRE = 0x1,
		kFLARE_FROST = 0x2,
		kFLARE_SHOCK = 0x4,
		kFLARE_WEAPON = 0x8,
	};
}
