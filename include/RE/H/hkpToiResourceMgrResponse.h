#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpToiResourceMgrResponse : std::int32_t
	{
		kHK_TOI_RESOURCE_MGR_RESPONSE_CONTINUE = 0x0,
		kHK_TOI_RESOURCE_MGR_RESPONSE_DO_NOT_EXPAND_AND_CONTINUE = 0x1,
		kHK_TOI_RESOURCE_MGR_RESPONSE_BACKSTEP = 0x2,
	};
}
