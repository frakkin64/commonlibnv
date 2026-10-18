#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FreeHeapBlock;

	// not confirmed: no named code in the executable refers to this type
	class FreeHeapBlockList
	{
	public:
		// members
		FreeHeapBlock* pHead;  // 00?
		FreeHeapBlock* pTail;  // 04?
	};
}
