#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FreeHeapBlockList;

	// not confirmed: no named code in the executable refers to this type
	class HeapFreeSubBucket
	{
	public:
		// members
		std::int32_t       iCount;  // 00?
		FreeHeapBlockList* pFirst;  // 04?
	};
}
