#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSAudioSynchTimer
	{
	public:
		// members
		std::uint32_t iMilliseconds;    // 00?
		std::uint32_t iLastUpdateTime;  // 04?
		std::uint32_t iFlags;           // 08?
	};
}
