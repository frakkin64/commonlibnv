#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ScrapHeapBuffer
	{
	public:
		// members
		char*         pBuffer;         // 00?
		std::uint32_t iCommittedSize;  // 04
	};
}
