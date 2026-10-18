#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkKdTreeNode_Leaf
	{
	public:
		// members
		std::int32_t  m_type_primId;    // 00?
		std::uint32_t m_numPrimitives;  // 04?
	};
}
