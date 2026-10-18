#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class ActorValueCacheInfo
	{
	public:
		// members
		bool         bOutOfDate;  // 00?
		std::uint8_t pad01[0x3];  // 01
		float        fValue;      // 04?
	};
}
