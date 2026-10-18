#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkKdTreeNode.h"
#include "RE/H/hkKdTreeProjectedEntry.h"

namespace RE
{
	class hkKdTreeCinfo;

	class alignas(16) hkKdTree
	{
	public:
		hkKdTree* ctor(hkKdTreeCinfo const& cinfo)
		{
			using func_t = hkKdTree*(__thiscall*)(hkKdTree*, hkKdTreeCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::hkKdTree::ctor };
			return func(this, cinfo);
		}

	protected:
		void initNodeArray(std::int32_t numNodes)
		{
			using func_t = decltype(&hkKdTree::initNodeArray);
			static REL::Relocation<func_t> func{ Offsets::hkKdTree::initNodeArray };
			func(this, numNodes);
		}

	public:
		// members
		hkArray<hkKdTreeNode, hkContainerHeapAllocator>           m_nodes;                  // 00
		std::int32_t                                              m_maxDepth;               // 0C?
		std::int32_t                                              m_numPrimitives;          // 10?
		std::int32_t                                              m_numRegularNodes;        // 14?
		std::int32_t                                              m_numReservedEmptyNodes;  // 18?
		hkArray<hkKdTreeProjectedEntry, hkContainerHeapAllocator> m_projectedEntries;       // 1C?
		std::uint8_t                                              pad28[0x8];               // 28
		hkAabb                                                    m_aabb;                   // 30?
	};
}
