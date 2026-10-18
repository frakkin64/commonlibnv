#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CRWLock
	{
	public:
		// members
		std::uint8_t unk00[0x38];  // 00? opaque
	};
}
