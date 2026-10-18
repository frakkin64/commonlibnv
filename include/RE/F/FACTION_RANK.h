#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESFaction;

	class FACTION_RANK
	{
	public:
		// members
		TESFaction*  pFaction;    // 00?
		char         cRank;       // 04?
		std::uint8_t pad05[0x3];  // 05
	};
}
