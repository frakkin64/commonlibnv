#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CARAVANDECKDATA
	{
	public:
		// members
		std::int32_t iDeckSize;  // 00
	};
	static_assert(sizeof(CARAVANDECKDATA) == 0x4);
}
