#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpContactPointAccept : std::int32_t
	{
		kHK_CONTACT_POINT_ACCEPT = 0x0,
		kHK_CONTACT_POINT_REJECT = 0x1,
	};
}
