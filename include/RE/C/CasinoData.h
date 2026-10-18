#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CasinoData
	{
	public:
		// members
		std::uint32_t casinoID;        // 00?
		std::int32_t  iTotalWinnings;  // 04?
		std::int16_t  iWinningLevel;   // 08?
		std::uint16_t pad0A;           // 0A
	};
}
