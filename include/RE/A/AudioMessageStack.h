#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSSoundMessage;

	// not confirmed: no named code in the executable refers to this type
	class AudioMessageStack
	{
	public:
		// members
		std::uint32_t   iCount;              // 00?
		bool            bBottomless;         // 04?
		std::uint8_t    pad05[0x3];          // 05
		BSSoundMessage* pTop;                // 08?
		std::uint32_t   iTimeLastAllocated;  // 0C?
	};
}
