#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkAabbTreeData_hkAabbTreeAabb16
	{
	public:
		// members
		std::uint16_t m_max[3];  // 00?
		std::uint16_t m_min[3];  // 06?
	};
}
