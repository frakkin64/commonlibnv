#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkKdTreeNode_Node
	{
	public:
		// members
		std::int32_t  m_type_left_axis;  // 00?
		std::uint16_t m_splitMin;        // 04?
		std::uint16_t m_splitMax;        // 06?
	};
}
