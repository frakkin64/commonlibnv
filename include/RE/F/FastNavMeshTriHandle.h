#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMesh;

	class FastNavMeshTriHandle
	{
	public:
		// members
		NavMesh*      pNavMesh;    // 00
		std::uint16_t usTriangle;  // 04
		std::uint16_t pad06;       // 06
	};
}
