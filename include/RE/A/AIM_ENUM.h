#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class AIM_ENUM : std::int32_t
	{
		kNO_SPELL = 0x0,
		kAIM = 0x1,
		kCAST = 0x2,
		kRELEASE = 0x3,
		kFIND_TARGETS = 0x4,
		kERR_SPELL_DISABLED = 0x5,
		kERR_ALREADY_CASTING = 0x6,
		kERR_CANNOT_CAST = 0x7,
	};
}
