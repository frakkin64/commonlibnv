#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkVertexFormat_DataUsage : std::int32_t
	{
		kUSAGE_NONE = 0x0,
		kUSAGE_POSITION = 0x1,
		kUSAGE_NORMAL = 0x2,
		kUSAGE_COLOR = 0x3,
		kUSAGE_TANGENT = 0x4,
		kUSAGE_BINORMAL = 0x5,
		kUSAGE_BLEND_MATRIX_INDEX = 0x6,
		kUSAGE_BLEND_WEIGHTS = 0x7,
		kUSAGE_BLEND_WEIGHTS_LAST_IMPLIED = 0x8,
		kUSAGE_TEX_COORD = 0x9,
		kUSAGE_POINT_SIZE = 0xA,
		kUSAGE_USER = 0xB,
		kUSAGE_LAST = 0xC,
	};
}
