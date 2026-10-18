#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NavMeshMath_CIRCLE_SEGMENT_INTERSECTION.h"
#include "RE/N/NavMeshMath_CSIResult.h"

namespace RE
{
	class NavMeshMath_CSIResults
	{
	public:
		// members
		NavMeshMath_CIRCLE_SEGMENT_INTERSECTION eType;       // 00?
		NavMeshMath_CSIResult                   Results[2];  // 04?
	};
}
