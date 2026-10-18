#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/P/PathSmootherPOVDebugArcTest.h"
#include "RE/P/PathSmootherPOVDebugPOV.h"
#include "RE/P/PathSmootherPOVDebugRayTest.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class PathSmootherPOVDebugData
	{
	public:
		// members
		BSSimpleArray<PathSmootherPOVDebugPOV, 1024>     POVs;  // 00?
		BSSimpleArray<PathSmootherPOVDebugRayTest, 1024> Rays;  // 10?
		BSSimpleArray<PathSmootherPOVDebugArcTest, 1024> Arcs;  // 20?
	};
}
