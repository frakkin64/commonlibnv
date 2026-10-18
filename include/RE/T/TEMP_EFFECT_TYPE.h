#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class TEMP_EFFECT_TYPE : std::int32_t
	{
		kTEMP_EFFECT_DECAL = 0x0,
		kTEMP_EFFECT_GEOMETRY_DECAL = 0x1,
		kTEMP_EFFECT_PARTICLE = 0x2,
		kTEMP_EFFECT_DEFAULT = 0x3,
		kMAGIC_HIT_EFFECT_DEFAULT = 0x4,
		kMAGIC_HIT_EFFECT_MODEL = 0x5,
		kMAGIC_HIT_EFFECT_SHADER = 0x6,
	};
}
