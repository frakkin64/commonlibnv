#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class VOICE_TYPE_DATA
	{
	public:
		// members
		char cFlags;  // 00
	};
	static_assert(sizeof(VOICE_TYPE_DATA) == 0x1);
}
