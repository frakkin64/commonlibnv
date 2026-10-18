#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PATHING_INFO_TYPE : std::int32_t
	{
		kPATHING_INFO_TYPE_NONE = 0x0,
		kPATHING_INFO_TYPE_MESSAGE = 0x1,
		kPATHING_INFO_TYPE_WARNING = 0x2,
		kPATHING_INFO_TYPE_FAILLURE = 0x3,
	};
}
