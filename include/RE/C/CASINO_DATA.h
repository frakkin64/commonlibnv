#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CASINO_DATA
	{
	public:
		// members
		float         fBJ_ShufflePercent;   // 00
		float         fBJ_BlackjackPayout;  // 04
		std::int32_t  iSlotStop_A;          // 08
		std::int32_t  iSlotStop_B;          // 0C
		std::int32_t  iSlotStop_C;          // 10
		std::int32_t  iSlotStop_D;          // 14
		std::int32_t  iSlotStop_E;          // 18
		std::int32_t  iSlotStop_F;          // 1C
		std::int32_t  iSlotStop_W;          // 20
		std::int32_t  iBJNumDecks;          // 24
		std::int32_t  iMaxWinnings;         // 28
		std::uint32_t casinoChipID;         // 2C
		std::uint32_t questID;              // 30
		bool          bBJ_DealerHoleCard;   // 34
		std::uint8_t  pad35[0x3];           // 35
	};
	static_assert(sizeof(CASINO_DATA) == 0x38);
}
