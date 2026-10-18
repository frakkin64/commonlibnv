#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class DETECTION_LEVEL : std::int32_t
	{
		kDETECTION_LOST = 0x0,
		kDETECTION_UNSEEN = 0x1,
		kDETECTION_NOTICED = 0x2,
		kDETECTION_SEEN = 0x3,
		kDETECTION_COUNT = 0x4,
	};
}
