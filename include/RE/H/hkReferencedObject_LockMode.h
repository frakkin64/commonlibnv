#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkReferencedObject_LockMode : std::int32_t
	{
		kLOCK_MODE_NONE = 0x0,
		kLOCK_MODE_AUTO = 0x1,
		kLOCK_MODE_MANUAL = 0x2,
	};
}
