#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class GamePlayFormulas_DifficultyLevel : std::int32_t
	{
		kDIFFICULTY_VERY_EASY = 0x0,
		kDIFFICULTY_LOW = 0x0,
		kDIFFICULTY_EASY = 0x1,
		kDIFFICULTY_NORMAL = 0x2,
		kDIFFICULTY_HARD = 0x3,
		kDIFFICULTY_VERY_HARD = 0x4,
		kDIFFICULTY_HIGH = 0x4,
	};
}
