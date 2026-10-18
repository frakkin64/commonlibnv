#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FffModeTexS
	{
	public:
		// members
		float                    scale;   // 00?
		std::uint32_t            width;   // 04
		std::uint32_t            height;  // 08?
		std::uint32_t            rowPad;  // 0C?
		stl::vector<std::int8_t> img[3];  // 10?
	};
}
