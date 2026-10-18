#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMeshInfo;

	class NavMeshTriHandle
	{
	public:
		// members
		NavMeshInfo*  pNavMeshInfo;  // 00
		std::uint16_t usTriangle;    // 04
		std::uint16_t pad06;         // 06
	};
	static_assert(sizeof(NavMeshTriHandle) == 0x8);
}
