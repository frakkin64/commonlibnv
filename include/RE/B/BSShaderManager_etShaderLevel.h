#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSShaderManager_etShaderLevel : std::int32_t
	{
		kBSSM_SV_NONE = 0x0,
		kBSSM_SV_1_X = 0x1,
		kBSSM_SV_2_0 = 0x2,
		kBSSM_SV_2_A96 = 0x3,
		kBSSM_SV_2_B96 = 0x4,
		kBSSM_SV_2_A = 0x5,
		kBSSM_SV_2_B = 0x6,
		kBSSM_SV_3_0 = 0x7,
		kBSSM_SV_COUNT = 0x7,
	};
}
