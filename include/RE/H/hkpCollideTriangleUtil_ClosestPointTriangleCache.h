#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCollideTriangleUtil_ClosestPointTriangleCache
	{
	public:
		// members
		float m_QQ;            // 00?
		float m_RR;            // 04?
		float m_QR;            // 08?
		float m_invTriNormal;  // 0C?
	};
}
