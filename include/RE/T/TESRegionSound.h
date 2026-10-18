#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class TESRegionSound
	{
	public:
		// members
		std::uint32_t uiSound;   // 00?
		std::uint32_t uiFlags;   // 04?
		std::uint32_t uiChance;  // 08?
	};
}
