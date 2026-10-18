#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMemChunk
	{
	public:
		// members
		std::uint32_t prevFoot;  // 00?
		std::uint32_t head;      // 04?
	};
}
