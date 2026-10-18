#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkMeshSection_PrimitiveType : std::int32_t
	{
		kPRIMITIVE_TYPE_UNKNOWN = 0x0,
		kPRIMITIVE_TYPE_POINT_LIST = 0x1,
		kPRIMITIVE_TYPE_LINE_LIST = 0x2,
		kPRIMITIVE_TYPE_TRIANGLE_LIST = 0x3,
		kPRIMITIVE_TYPE_TRIANGLE_STRIP = 0x4,
	};
}
