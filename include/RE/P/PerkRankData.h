#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSPerk;

	class PerkRankData
	{
	public:
		// members
		BGSPerk*     pPerk;         // 00
		std::uint8_t cCurrentRank;  // 04?
		std::uint8_t pad05[0x3];    // 05
	};
}
