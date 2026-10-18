#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiTaskManager_ManagerStatus : std::int32_t
	{
		kSTOPPED = 0x0,
		kSTOPPING = 0x1,
		kRUNNING = 0x2,
	};
}
