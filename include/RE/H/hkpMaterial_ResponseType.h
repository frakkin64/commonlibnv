#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpMaterial_ResponseType : std::int32_t
	{
		kRESPONSE_INVALID = 0x0,
		kRESPONSE_SIMPLE_CONTACT = 0x1,
		kRESPONSE_REPORTING = 0x2,
		kRESPONSE_NONE = 0x3,
		kRESPONSE_MAX_ID = 0x4,
	};
}
