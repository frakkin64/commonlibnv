#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CrossedTriangle
	{
	public:
		// members
		std::uint32_t iTriangleIndex;  // 00?
		char          iNeighborCount;  // 04?
		std::uint8_t  pad05[0x3];      // 05
	};
}
