#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class DIALOGUE_DATA
	{
	public:
		// members
		char type;    // 00
		char cFlags;  // 01
	};
	static_assert(sizeof(DIALOGUE_DATA) == 0x2);
}
