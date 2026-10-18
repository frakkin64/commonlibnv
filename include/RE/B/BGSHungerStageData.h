#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SpellItem;

	class BGSHungerStageData
	{
	public:
		// members
		std::uint32_t iFOOD;      // 00?
		SpellItem*    pSickness;  // 04?
	};
}
