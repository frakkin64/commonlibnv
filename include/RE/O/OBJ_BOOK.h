#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class OBJ_BOOK
	{
	public:
		// members
		std::uint8_t cFlags;    // 00
		char         eTeaches;  // 01
	};
	static_assert(sizeof(OBJ_BOOK) == 0x2);
}
