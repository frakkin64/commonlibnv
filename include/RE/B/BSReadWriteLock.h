#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSReadWriteLock
	{
	public:
		// members
		volatile std::uint32_t uiLock;          // 00?
		std::uint32_t          uiWriterThread;  // 04
	};
}
