#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SavedPlayerData
	{
	public:
		// members
		char          pPlayerName[260];   // 00?
		std::uint16_t iLevel;             // 104?
		std::uint16_t pad106;             // 106
		float         fGameDate;          // 108?
		std::uint32_t iTotalPlayingTime;  // 10C?
	};
}
