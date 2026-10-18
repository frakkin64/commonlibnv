#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BGSBodyPart_LIMB_ENUM : std::int32_t
	{
		kLIMB_NONE = -1,
		kLIMB_TORSO = 0x0,
		kLIMB_HEAD_1 = 0x1,
		kLIMB_HEAD_2 = 0x2,
		kLIMB_LEFT_ARM_1 = 0x3,
		kLIMB_LEFT_ARM_2 = 0x4,
		kLIMB_RIGHT_ARM_1 = 0x5,
		kLIMB_RIGHT_ARM_2 = 0x6,
		kLIMB_LEFT_LEG_1 = 0x7,
		kLIMB_LEFT_LEG_2 = 0x8,
		kLIMB_LEFT_LEG_3 = 0x9,
		kLIMB_RIGHT_LEG_1 = 0xA,
		kLIMB_RIGHT_LEG_2 = 0xB,
		kLIMB_RIGHT_LEG_3 = 0xC,
		kLIMB_BRAIN = 0xD,
		kLIMB_WEAPON = 0xE,
		kLIMB_COUNT = 0xF,
	};
}
