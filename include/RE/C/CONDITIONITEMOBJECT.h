#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class CONDITIONITEMOBJECT : std::int32_t
	{
		kCIO_SELF = 0x0,
		kCIO_TARGET = 0x1,
		kCIO_REF = 0x2,
		kCIO_COMBATTARGET = 0x3,
		kCIO_LINKEDREF = 0x4,
		kCIO_COUNT = 0x5,
	};
}
