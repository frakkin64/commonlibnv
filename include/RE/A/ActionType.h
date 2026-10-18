#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class ActionType : std::int32_t
	{
		kEcRunMarketplaceScriptAction = 0x0,
		kEcLaunchSystemPackage = 0x1,
		kEcInvalid = 0x2,
	};
}
