#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiAnimationKey_KeyType : std::int32_t
	{
		kNOINTERP = 0x0,
		kLINKEY = 0x1,
		kBEZKEY = 0x2,
		kTCBKEY = 0x3,
		kEULERKEY = 0x4,
		kSTEPKEY = 0x5,
		kNUMKEYTYPES = 0x6,
	};
}
