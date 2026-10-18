#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TERMINAL_DATA
	{
	public:
		// members
		std::uint8_t cDifficulty;  // 00
		std::uint8_t cFlags;       // 01
		std::uint8_t cServerType;  // 02
		std::uint8_t cUnused;      // 03
	};
	static_assert(sizeof(TERMINAL_DATA) == 0x4);
}
