#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class RACE_HEAD_PART : std::int32_t
	{
		kRHP_HEAD = 0x0,
		kRHP_EAR = 0x1,
		kRHP_MOUTH = 0x2,
		kRHP_TEETH_LOWER = 0x3,
		kRHP_TEETH_UPPER = 0x4,
		kRHP_TONGUE = 0x5,
		kRHP_EYE_LEFT = 0x6,
		kRHP_EYE_RIGHT = 0x7,
		kRACE_HEAD_PART_COUNT = 0x8,
		kRACE_HAIR = 0x9,
	};
}
