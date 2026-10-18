#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpSimpleContactConstraintDataInfo
	{
	public:
		// members
		std::uint16_t m_flags;    // 00?
		std::uint16_t m_index;    // 02?
		std::uint32_t m_data[7];  // 04?
	};
}
