#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiShaderDeclaration_ShaderParameterType : std::int32_t
	{
		kSPTYPE_FLOAT1 = 0x0,
		kSPTYPE_FLOAT2 = 0x1,
		kSPTYPE_FLOAT3 = 0x2,
		kSPTYPE_FLOAT4 = 0x3,
		kSPTYPE_UBYTECOLOR = 0x4,
		kSPTYPE_UBYTE4 = 0x5,
		kSPTYPE_SHORT2 = 0x6,
		kSPTYPE_SHORT4 = 0x7,
		kSPTYPE_NORMUBYTE4 = 0x8,
		kSPTYPE_NORMSHORT2 = 0x9,
		kSPTYPE_NORMSHORT4 = 0xA,
		kSPTYPE_NORMUSHORT2 = 0xB,
		kSPTYPE_NORMUSHORT4 = 0xC,
		kSPTYPE_UDEC3 = 0xD,
		kSPTYPE_NORMDEC3 = 0xE,
		kSPTYPE_FLOAT16_2 = 0xF,
		kSPTYPE_FLOAT16_4 = 0x10,
		kSPTYPE_NONE = 0x11,
		kSPTYPE_COUNT = 0x12,
	};
}
