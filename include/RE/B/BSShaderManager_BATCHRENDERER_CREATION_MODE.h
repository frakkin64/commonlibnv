#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSShaderManager_BATCHRENDERER_CREATION_MODE : std::int32_t
	{
		kBRCM_NORMAL = 0x63,
		kBRCM_NO_GROUPS = 0x64,
		kBRCM_ALPHA_GROUP = 0x65,
	};
}
