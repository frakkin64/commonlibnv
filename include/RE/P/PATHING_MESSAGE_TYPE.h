#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PATHING_MESSAGE_TYPE : std::int32_t
	{
		kPMT_UNDEF = -1,
		kPMT_OK = 0x0,
		kPMT_ERROR = 0x1,
	};
}
