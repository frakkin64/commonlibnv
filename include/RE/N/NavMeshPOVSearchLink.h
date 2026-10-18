#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AngleSinCos.h"
#include "RE/F/FastNavMeshEdgeLocation.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NavMeshPOVSearchLink
	{
	public:
		// members
		AngleSinCos             ExitAngle;      // 00?
		AngleSinCos             EntryAngle;     // 08?
		FastNavMeshEdgeLocation ExitLocation;   // 10?
		FastNavMeshEdgeLocation EntryLocation;  // 28?
	};
}
