#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class Pathing_UPDATE_DETAILED_PATH_RESULT : std::int32_t
	{
		kFAILED = -1,
		kNO_CHANGE = 0x0,
		kCLEARED_DETAILED_PATH = 0x1,
		kCREATED_DETAILED_PATH = 0x2,
		kUPDATED_DETAILED_PATH = 0x3,
	};
}
