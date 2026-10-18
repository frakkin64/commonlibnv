#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class OBJ_LAND
	{
	public:
		// members
		std::uint32_t iFlags;  // 00
	};
	static_assert(sizeof(OBJ_LAND) == 0x4);
}
