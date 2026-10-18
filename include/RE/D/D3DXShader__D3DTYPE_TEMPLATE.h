#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class D3DXShader__D3DTYPE_TEMPLATE : std::int32_t
	{
		kD3DTT_SCALAR = 0x0,
		kD3DTT_VECTOR = 0x1,
		kD3DTT_MATRIX = 0x2,
		kD3DTT_OBJECT = 0x3,
		kD3DTT_STRUCT = 0x4,
		kD3DTT_UNKNOWN = 0x5,
	};
}
