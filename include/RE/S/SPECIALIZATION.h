#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class SPECIALIZATION : std::int32_t
	{
		kSPECIALIZATION_NONE = -1,
		kSPECIALIZATION_COMBAT = 0x0,
		kSPECIALIZATION_MAGIC = 0x1,
		kSPECIALIZATION_STEALTH = 0x2,
		kSPECIALIZATION_COUNT = 0x3,
	};
}
