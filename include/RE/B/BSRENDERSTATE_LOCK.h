#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSRENDERSTATE_LOCK : std::int32_t
	{
		kBSRS_NOLOCK = 0x0,
		kBSRS_LOCK = 0x1,
		kBSRS_UNLOCK = 0x1,
	};
}
