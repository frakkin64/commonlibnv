#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpContactPointAddedEvent_Type : std::int32_t
	{
		kTYPE_TOI = 0x0,
		kTYPE_MANIFOLD = 0x1,
	};
}
