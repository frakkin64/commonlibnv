#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class QUEUED_SUB_BUFFER_TYPE : std::int32_t
	{
		kQUEUED_SUB_BUFFER_ANIMATION = 0x0,
		kQUEUED_SUB_BUFFER_CHAR_CONTROLLER = 0x1,
		kQUEUED_SUB_BUFFER_HAVOK_DATA = 0x2,
		kQUEUED_SUB_BUFFER_COUNT = 0x3,
	};
}
