#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSNonReentrantSpinLock
	{
	public:
		// members
		std::uint32_t uiLock;  // 00?
	};
}
