#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ADDON_DATA
	{
	public:
		// members
		std::uint16_t usMasterParticleCap;  // 00
		std::uint8_t  cFlags;               // 02
		std::uint8_t  pad03;                // 03
	};
	static_assert(sizeof(ADDON_DATA) == 0x4);
}
