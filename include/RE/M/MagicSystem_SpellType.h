#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class MagicSystem_SpellType : std::int32_t
	{
		kSPELL = 0x0,
		kDISEASE = 0x1,
		kPOWER = 0x2,
		kLESSER_POWER = 0x3,
		kABILITY = 0x4,
		kPOISON = 0x5,
		kENCHANTMENT = 0x6,
		kPOTION = 0x7,
		kWORTCRAFT = 0x8,
		kLEVELED_SPELL = 0x9,
		kADDICTION = 0xA,
		kSPELL_TYPE_COUNT = 0xB,
	};
}
