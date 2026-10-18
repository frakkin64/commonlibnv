#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ENCOUNTER_ZONE_GAME_DATA
	{
	public:
		// members
		std::uint32_t iDetachTime;  // 00
		std::uint32_t iAttachTime;  // 04
		std::uint32_t iResetTime;   // 08
		std::uint16_t sZoneLevel;   // 0C
		std::uint16_t pad0E;        // 0E
	};
	static_assert(sizeof(ENCOUNTER_ZONE_GAME_DATA) == 0x10);
}
