#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class TESClimate_TransTime : std::int32_t
	{
		kSUNRISE_BEGIN = 0x0,
		kSUNRISE_END = 0x1,
		kSUNSET_BEGIN = 0x2,
		kSUNSET_END = 0x3,
		kNUM_TRANS_TIMES = 0x4,
	};
}
