#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANGLE_DIRECTION.h"

namespace RE
{
	class PathSmootherPOV;

	class PathSmootherPOVNode
	{
	public:
		// members
		PathSmootherPOV* pPOV;           // 00?
		ANGLE_DIRECTION  Direction;      // 04?
		float            fActualRadius;  // 08?
	};
}
