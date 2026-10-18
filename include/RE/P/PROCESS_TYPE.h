#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PROCESS_TYPE : std::int32_t
	{
		kPROCESS_TYPE_NONE = -1,
		kPROCESS_TYPE_HIGH = 0x0,
		kPROCESS_TYPE_MIDDLE_HIGH = 0x1,
		kPROCESS_TYPE_MIDDLE_LOW = 0x2,
		kPROCESS_TYPE_LOW = 0x3,
		kPROCESS_TYPE_COUNT = 0x4,
	};
}
