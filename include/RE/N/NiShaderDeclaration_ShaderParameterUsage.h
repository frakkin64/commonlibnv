#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiShaderDeclaration_ShaderParameterUsage : std::int32_t
	{
		kSPUSAGE_POSITION = 0x0,
		kSPUSAGE_BLENDWEIGHT = 0x1,
		kSPUSAGE_BLENDINDICES = 0x2,
		kSPUSAGE_NORMAL = 0x3,
		kSPUSAGE_PSIZE = 0x4,
		kSPUSAGE_TEXCOORD = 0x5,
		kSPUSAGE_TANGENT = 0x6,
		kSPUSAGE_BINORMAL = 0x7,
		kSPUSAGE_TESSFACTOR = 0x8,
		kSPUSAGE_POSITIONT = 0x9,
		kSPUSAGE_COLOR = 0xA,
		kSPUSAGE_FOG = 0xB,
		kSPUSAGE_DEPTH = 0xC,
		kSPUSAGE_SAMPLE = 0xD,
		kSPUSAGE_COUNT = 0xE,
	};
}
