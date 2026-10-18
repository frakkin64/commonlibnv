#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshTriHandle.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NavMeshSearchDebugData
	{
	public:
		// members
		FastNavMeshTriHandle Triangle;              // 00?
		float                fCost;                 // 08?
		float                fHeuristic;            // 0C?
		float                fSearchSpecificFloat;  // 10?
		std::int32_t         fSearchSpecificInt;    // 14?
	};
}
