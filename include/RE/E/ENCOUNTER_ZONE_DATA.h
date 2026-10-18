#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESForm;

	class ENCOUNTER_ZONE_DATA
	{
	public:
		// members
		TESForm*     pZoneOwner;  // 00
		char         iOwnerRank;  // 04
		std::uint8_t cMinLevel;   // 05
		char         cFlags;      // 06
		std::uint8_t pad07;       // 07
	};
	static_assert(sizeof(ENCOUNTER_ZONE_DATA) == 0x8);
}
