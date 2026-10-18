#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PackageNS_CRIME_TYPE : std::int32_t
	{
		kCRIME_TYPE_NONE = -1,
		kCRIME_TYPE_STEAL = 0x0,
		kCRIME_TYPE_PICKPOCKET = 0x1,
		kCRIME_TYPE_TRESPASS = 0x2,
		kCRIME_TYPE_ATTACK = 0x3,
		kCRIME_TYPE_MURDER = 0x4,
		kCRIME_TYPE_COUNT = 0x5,
	};
}
