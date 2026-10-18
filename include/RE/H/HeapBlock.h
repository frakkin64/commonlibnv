#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class HeapBlock
	{
	public:
		// members
		HeapBlock*    pPrevious;  // 00?
		std::uint32_t iMemSize;   // 04?
	};
}
