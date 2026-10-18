#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BGSEntryPointFunction_ENTRY_POINT_FUNCTION_TYPE : std::int32_t
	{
		kVALUE_FUNCTION = 0x0,
		kLEVELED_LIST_FUNCTION = 0x1,
		kACTIVATE_FUNCTION = 0x2,
		kSPECIAL_FUNCTION = 0x3,
		kENTRY_POINT_FUNCTION_TYPE_COUNT = 0x4,
	};
}
