#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BIPED_BONE : std::int32_t
	{
		kBIPED_BONE_NONE = -1,
		kBIPED_BONE_HEAD = 0x0,
		kBIPED_BONE_WEAPON = 0x1,
		kBIPED_BONE_PIP_BOY = 0x2,
		kBIPED_BONE_BACKPACK = 0x3,
		kBIPED_BONE_NECKLACE = 0x4,
		kBIPED_BONE_COUNT = 0x5,
	};
}
