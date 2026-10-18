#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkgpConvexHull_AbsoluteScaleConfig_Method.h"

namespace RE
{
	class hkgpConvexHull_AbsoluteScaleConfig
	{
	public:
		using Method = hkgpConvexHull_AbsoluteScaleConfig_Method;

		// members
		hkgpConvexHull_AbsoluteScaleConfig_Method m_method;          // 00?
		float                                     m_minComDistance;  // 04?
	};
}
