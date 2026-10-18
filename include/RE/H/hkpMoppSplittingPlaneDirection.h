#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpMoppSplittingPlaneDirection
	{
	public:
		// members
		hkVector4    m_direction;  // 00?
		float        m_cost;       // 10?
		std::int32_t m_index;      // 14?
		std::uint8_t pad18[0x8];   // 18
	};
}
