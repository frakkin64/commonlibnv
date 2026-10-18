#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class ColorPair
	{
	public:
		// members
		std::uint32_t iID;     // 00?
		std::uint32_t iColor;  // 04?
	};
}
