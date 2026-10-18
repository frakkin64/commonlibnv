#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FACTION_DATA
	{
	public:
		// members
		std::uint32_t iFlags;  // 00
	};
	static_assert(sizeof(FACTION_DATA) == 0x4);
}
