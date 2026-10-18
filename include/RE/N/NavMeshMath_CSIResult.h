#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AngleSinCos.h"
#include "RE/N/NavMeshMath_CIRCLE_SEGMENT_INTERSECTION_TYPE.h"

namespace RE
{
	class NavMeshMath_CSIResult
	{
	public:
		// members
		NavMeshMath_CIRCLE_SEGMENT_INTERSECTION_TYPE eType;          // 00?
		AngleSinCos                                  CircleParam;    // 04?
		float                                        fSegmentParam;  // 0C?
	};
}
