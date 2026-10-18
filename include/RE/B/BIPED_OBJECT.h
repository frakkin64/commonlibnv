#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BIPED_OBJECT : std::int32_t
	{
		kBO_NONE = -1,
		kBO_HEAD = 0x0,
		kBO_HAIR = 0x1,
		kBO_UPPER_BODY = 0x2,
		kBO_LEFT_HAND = 0x3,
		kBO_RIGHT_HAND = 0x4,
		kBO_WEAPON = 0x5,
		kBO_PIP_BOY = 0x6,
		kBO_BACKPACK = 0x7,
		kBO_NECKLACE = 0x8,
		kBO_HEADBAND = 0x9,
		kBO_HAT = 0xA,
		kBO_EYE_GLASSES = 0xB,
		kBO_NOSE_RING = 0xC,
		kBO_EARRINGS = 0xD,
		kBO_MASK = 0xE,
		kBO_CHOKER = 0xF,
		kBO_MOUTH_OBJECT = 0x10,
		kBO_BODY_ADDON_1 = 0x11,
		kBO_BODY_ADDON_2 = 0x12,
		kBO_BODY_ADDON_3 = 0x13,
		kBIPED_OBJECT_COUNT = 0x14,
	};
}
