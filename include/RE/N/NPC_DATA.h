#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NPC_DATA
	{
	public:
		// members
		std::uint8_t cSkill[14];   // 00
		std::uint8_t cOffset[14];  // 0E
	};
	static_assert(sizeof(NPC_DATA) == 0x1C);
}
