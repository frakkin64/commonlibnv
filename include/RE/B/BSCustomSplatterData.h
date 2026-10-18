#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSCustomSplatterData
	{
	public:
		// members
		float         fAge;       // 00
		float         fDuration;  // 04
		float         fAlpha;     // 08
		std::uint32_t uiCount;    // 0C?
	};
}
