#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkKdTreeProjectedEntry
	{
	public:
		// members
		std::uint16_t m_min[3];      // 00?
		std::uint16_t m_primIdHigh;  // 06?
		std::uint16_t m_max[3];      // 08?
		std::uint16_t m_primIdLow;   // 0E?
	};
}
