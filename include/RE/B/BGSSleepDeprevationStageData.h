#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SpellItem;

	class BGSSleepDeprevationStageData
	{
	public:
		// members
		std::uint32_t iSleep;     // 00?
		SpellItem*    pSickness;  // 04?
	};
}
