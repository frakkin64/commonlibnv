#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSShaderProperty_TextureTypeEnum : std::int32_t
	{
		kTEXTYPE_DIFFUSE = 0x0,
		kTEXTYPE_BASE = 0x0,
		kTEXTYPE_NORMAL = 0x1,
		kTEXTYPE_GLOSS = 0x1,
		kTEXTYPE_GLOW = 0x2,
		kTEXTYPE_SKIN_SST = 0x2,
		kTEXTYPE_HAIR_LAYER = 0x2,
		kTEXTYPE_HEIGHT = 0x3,
		kTEXTYPE_ENV = 0x4,
		kTEXTYPE_ENV_MASK = 0x5,
		kTEXTYPE_SPECULAR = 0x6,
		kTEXTYPE_COUNT = 0x7,
	};
}
