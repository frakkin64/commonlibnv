#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class PerkData
	{
	public:
		// members
		bool         bTrait;     // 00
		std::uint8_t cLevel;     // 01
		std::uint8_t cNumRanks;  // 02
		bool         bPlayable;  // 03
		bool         bHidden;    // 04
	};
	static_assert(sizeof(PerkData) == 0x5);
}
