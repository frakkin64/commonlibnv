#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class UidItem
	{
	public:
		// members
		std::uint64_t uid;         // 00?
		std::int32_t  patchIndex;  // 08?
		std::uint32_t pad0C;       // 0C
	};
}
