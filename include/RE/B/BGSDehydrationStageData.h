#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SpellItem;

	class BGSDehydrationStageData
	{
	public:
		// members
		std::uint32_t iH20;       // 00?
		SpellItem*    pSickness;  // 04?
	};
}
