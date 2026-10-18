#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCollideTriangleUtil_PointTriangleDistanceCache
	{
	public:
		// members
		float m_invEdgeLen[3];  // 00?
		float m_invNormalLen;   // 0C?
		float m_normalLen;      // 10?
	};
}
