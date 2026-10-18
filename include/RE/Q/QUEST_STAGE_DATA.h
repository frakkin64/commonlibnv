#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class QUEST_STAGE_DATA
	{
	public:
		// members
		std::uint8_t ucIndex;  // 00?
		bool         bIsDone;  // 01
	};
}
