#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkVertexFormat_DataType : std::int32_t
	{
		kTYPE_NONE = 0x0,
		kTYPE_INT8 = 0x1,
		kTYPE_UINT8 = 0x2,
		kTYPE_INT16 = 0x3,
		kTYPE_UINT16 = 0x4,
		kTYPE_INT32 = 0x5,
		kTYPE_UINT32 = 0x6,
		kTYPE_UINT8_DWORD = 0x7,
		kTYPE_ARGB32 = 0x8,
		kTYPE_FLOAT16 = 0x9,
		kTYPE_FLOAT32 = 0xA,
		kTYPE_VECTOR4 = 0xB,
		kTYPE_LAST = 0xC,
	};
}
