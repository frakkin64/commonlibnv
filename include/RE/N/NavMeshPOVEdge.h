#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NavMeshPOVEdge
	{
	public:
		// members
		std::uint16_t EdgeIndex;  // 00?
	};
}
