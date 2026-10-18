#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class VertexDist
	{
	public:
		// members
		std::uint32_t iVertexDest;   // 00?
		std::uint32_t iVertexDest2;  // 04?
		float         fDistance;     // 08
	};
}
