#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class bhkWorldNS_OBJECTACTION : std::int32_t
	{
		kOA_ADD = 0x0,
		kOA_REMOVE = 0x1,
		kOA_NI2HK = 0x2,
		kOA_ENABLE = 0x3,
		kOA_KILLHAVOK = 0x4,
		kOA_MOTION = 0x5,
		kOA_DEBUGDISPLAY = 0x6,
		kOA_GROUP = 0x7,
		kOA_QACTIVE = 0x8,
		kOA_CHANGELAYER = 0x9,
		kOA_FIXEDTOKEYFRAMED = 0xA,
		kOA_SHIFT = 0xB,
		kOA_ACTIVATE = 0xC,
		kOA_FORCEADD = 0xD,
		kOA_ENABLECOLLISION = 0xE,
		kOA_SETRESTITUTION = 0xF,
		kOA_SETFRICTION = 0x10,
		kOA_DISABLE = 0x11,
		kOA_TOTAL = 0x12,
	};
}
