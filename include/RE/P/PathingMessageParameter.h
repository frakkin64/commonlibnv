#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PathingLocation.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class PathingMessageParameter
	{
	public:
		// members
		std::int32_t    ints[3];   // 00?
		PathingLocation location;  // 0C?
	};
}
