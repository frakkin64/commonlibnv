#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CARAVANCARDDATA
	{
	public:
		// members
		std::uint32_t iFaceValue;  // 00
		std::uint32_t iCardSuit;   // 04
	};
	static_assert(sizeof(CARAVANCARDDATA) == 0x8);
}
