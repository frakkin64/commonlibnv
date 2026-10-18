#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class MiscSaveStat
	{
	public:
		// members
		char          pName[260];      // 00?
		std::uint32_t iSize;           // 104
		std::uint32_t iDebugOverhead;  // 108
	};
}
