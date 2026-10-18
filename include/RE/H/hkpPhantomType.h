#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpPhantomType : std::int32_t
	{
		kHK_PHANTOM_AABB = 0x0,
		kHK_PHANTOM_SIMPLE_SHAPE = 0x1,
		kHK_PHANTOM_CACHING_SHAPE = 0x2,
		kHK_PHANTOM_USER0 = 0x3,
		kHK_PHANTOM_USER1 = 0x4,
		kHK_PHANTOM_USER2 = 0x5,
		kHK_PHANTOM_USER3 = 0x6,
		kHK_PHANTOM_USER4 = 0x7,
		kHK_PHANTOM_USER5 = 0x8,
		kHK_PHANTOM_USER6 = 0x9,
		kHK_PHANTOM_USER7 = 0xA,
		kHK_PHANTOM_USER8 = 0xB,
		kHK_PHANTOM_USER9 = 0xC,
		kHK_PHANTOM_MAX_ID = 0xD,
	};
}
