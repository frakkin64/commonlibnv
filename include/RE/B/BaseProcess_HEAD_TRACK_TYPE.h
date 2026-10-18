#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BaseProcess_HEAD_TRACK_TYPE : std::int32_t
	{
		kHEAD_TRACK_TYPE_DEFAULT = 0x0,
		kHEAD_TRACK_TYPE_ACTION = 0x1,
		kHEAD_TRACK_TYPE_SCRIPT = 0x2,
		kHEAD_TRACK_TYPE_COMBAT = 0x3,
		kHEAD_TRACK_TYPE_DIALOG = 0x4,
		kHEAD_TRACK_TYPE_USE_WEAPON = 0x5,
		kHEAD_TRACK_TYPE_COUNT = 0x6,
	};
}
