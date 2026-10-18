#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class REPUTATION_DATA
	{
	public:
		// members
		float fMaximumValue;  // 00
	};
	static_assert(sizeof(REPUTATION_DATA) == 0x4);
}
