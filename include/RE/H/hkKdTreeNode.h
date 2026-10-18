#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkKdTreeNode_Leaf.h"
#include "RE/H/hkKdTreeNode_Node.h"

namespace RE
{
	class hkKdTreeNode
	{
	public:
		using Leaf = hkKdTreeNode_Leaf;
		using Node = hkKdTreeNode_Node;

		// members
		std::uint8_t m_data[0x8];  // 00? opaque: hkKdTreeNode::<unnamed_type_m_data>
	};
}
