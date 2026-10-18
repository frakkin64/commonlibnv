#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ActorValue_Section : std::int32_t
	{
		kATTRIBUTE = 0x0,
		kDERIVED_ATTRIBUTE = 0x1,
		kSKILL = 0x2,
		kAI_ATTRIBUTE = 0x3,
		kCONDITION = 0x4,
		kINT_VALUE = 0x5,
		kRESISTANCE = 0x6,
		kVARIABLE = 0x7,
		kSECTION_COUNT = 0x8,
	};
}
