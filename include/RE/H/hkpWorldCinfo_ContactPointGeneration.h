#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpWorldCinfo_ContactPointGeneration : std::int32_t
	{
		kCONTACT_POINT_ACCEPT_ALWAYS = 0x0,
		kCONTACT_POINT_REJECT_DUBIOUS = 0x1,
		kCONTACT_POINT_REJECT_MANY = 0x2,
	};
}
