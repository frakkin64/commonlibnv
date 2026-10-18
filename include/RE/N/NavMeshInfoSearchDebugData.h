#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMeshInfo;

	// not confirmed: no named code in the executable refers to this type
	class NavMeshInfoSearchDebugData
	{
	public:
		// members
		const NavMeshInfo* pInfo;       // 00?
		float              fCost;       // 04?
		float              fHeuristic;  // 08?
	};
}
