#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NavMeshEdge
	{
	public:
		// members
		std::uint16_t Vertices[2];  // 00?
	};
}
