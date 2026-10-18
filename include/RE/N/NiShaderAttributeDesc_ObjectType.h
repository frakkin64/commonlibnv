#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiShaderAttributeDesc_ObjectType : std::int32_t
	{
		kOT_UNDEFINED = 0x0,
		kOT_EFFECT_GENERALLIGHT = 0x1,
		kOT_EFFECT_POINTLIGHT = 0x2,
		kOT_EFFECT_DIRECTIONALLIGHT = 0x3,
		kOT_EFFECT_SPOTLIGHT = 0x4,
		kOT_EFFECT_ENVIRONMENTMAP = 0x5,
		kOT_EFFECT_PROJECTEDSHADOWMAP = 0x6,
		kOT_EFFECT_PROJECTEDLIGHTMAP = 0x7,
		kOT_EFFECT_FOGMAP = 0x8,
		kOT_COUNT = 0x9,
	};
}
