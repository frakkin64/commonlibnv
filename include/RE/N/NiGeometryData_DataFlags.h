#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiGeometryData_DataFlags : std::int32_t
	{
		kNBT_METHOD_NONE = 0x0,
		kNBT_METHOD_NDL = 0x1000,
		kNBT_METHOD_DEPRECATED = 0x2000,
		kNBT_METHOD_ATI = 0x3000,
		kNBT_METHOD_MASK = 0xF000,
		kTEXTURE_SET_MASK = 0x1,
	};
}
