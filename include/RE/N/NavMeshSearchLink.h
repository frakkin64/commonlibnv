#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMesh;

	// not confirmed: no named code in the executable refers to this type
	class NavMeshSearchLink
	{
	public:
		// members
		NavMesh*      pNavMesh;    // 00?
		std::uint16_t sTriangle;   // 04?
		std::uint16_t pad06;       // 06
		std::int32_t  iEdgeIndex;  // 08?
	};
}
