#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SpellItem;

	class BGSRadiationStageData
	{
	public:
		// members
		std::uint32_t iRads;      // 00?
		SpellItem*    pSickness;  // 04?
	};
}
