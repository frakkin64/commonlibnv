#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb16.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkKdTree;

	class hkpTreeWorldManager :
		public hkReferencedObject  // 00
	{
	public:
		enum class Type : std::int32_t
		{
			kMANAGER_KDTREE = 0x0,
			kMANAGER_AABBTREE = 0x1,
		};

		// members
		hkpTreeWorldManager::Type                                   m_type;          // 08
		hkAabbTree<hkAabbTreeData_hkAabbTreeAabb16, std::uint16_t>* m_inactiveTree;  // 0C
		hkKdTree*                                                   m_kdTree;        // 10
	};
}
