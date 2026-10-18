#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkVector4Comparison
	{
	public:
		// members
		std::uint32_t m_mask0;  // 00?
		std::uint32_t m_mask1;  // 04?
		std::uint32_t m_mask2;  // 08?
		std::uint32_t m_mask3;  // 0C?
	};
}
