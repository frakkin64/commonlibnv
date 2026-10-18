#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BINKRECT
	{
	public:
		// members
		std::int32_t Left;    // 00?
		std::int32_t Top;     // 04?
		std::int32_t Width;   // 08?
		std::int32_t Height;  // 0C?
	};
}
