#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSCoreMessage_MsgReturn : std::int32_t
	{
		kMR_NONE = 0x0,
		kMR_ACCEPT = 0x1,
		kMR_REJECT = 0x2,
		kMR_CANCEL = 0x3,
	};
}
