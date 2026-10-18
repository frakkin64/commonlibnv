#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BIPED_PART : std::int32_t
	{
		kP_OTHER = 0x0,
		kP_HEAD = 0x1,
		kP_BODY = 0x2,
		kP_SPINE1 = 0x3,
		kP_SPINE2 = 0x4,
		kP_LUPPERARM = 0x5,
		kP_LFOREARM = 0x6,
		kP_LHAND = 0x7,
		kP_LTHIGH = 0x8,
		kP_LCALF = 0x9,
		kP_LFOOT = 0xA,
		kP_RUPPERARM = 0xB,
		kP_RFOREARM = 0xC,
		kP_RHAND = 0xD,
		kP_RTHIGH = 0xE,
		kP_RCALF = 0xF,
		kP_RFOOT = 0x10,
		kP_TAIL = 0x11,
		kP_SHIELD = 0x12,
		kP_QUIVER = 0x13,
		kP_WEAPON = 0x14,
		kP_PONYTAIL = 0x15,
		kP_WING = 0x16,
		kP_PACK = 0x17,
		kP_CHAIN = 0x18,
		kP_ADDONHEAD = 0x19,
		kP_ADDONCHEST = 0x1A,
		kP_ADDONLEG = 0x1B,
		kP_ADDONARM = 0x1C,
		kNUMFILTERPARTS = 0x20,
	};
}
