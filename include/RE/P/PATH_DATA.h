#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class PATH_DATA
	{
	public:
		// members
		std::uint8_t cFlags;  // 00
	};
	static_assert(sizeof(PATH_DATA) == 0x1);
}
