#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkKdTreeNode_Leaf.h"
#include "RE/H/hkKdTreeNode_Node.h"

namespace RE
{
	template <class T>
	union hkKdTreeNode_
	{
	public:
		// members
		hkKdTreeNode_Leaf m_leaf;  // 00
		hkKdTreeNode_Node m_node;  // 00
	};
}
