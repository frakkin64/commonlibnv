#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CREATURE_DATA
	{
	public:
		// members
		char         eType;     // 00
		std::uint8_t iCombat;   // 01
		std::uint8_t iOther;    // 02
		std::uint8_t iStealth;  // 03
	};
	static_assert(sizeof(CREATURE_DATA) == 0x4);
}
