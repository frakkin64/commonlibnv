#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/N/Node.h"
#include "RE/T/T.h"

namespace RE
{
	class NodeManager;

	template <class T, class U>
	class __declspec(novtable) hkAabbTree
	{
	public:
		class Node
		{
		public:
			// members
			T m_volume;
			union
			{
				std::uint8_t m_nodeData[0x4];  // opaque: hkAabbTree<hkAabbTreeData::hkAabbTreeAabb,unsigned short>::N
				std::uint8_t m_leafData[0x4];  // opaque: hkAabbTree<hkAabbTreeData::hkAabbTreeAabb,unsigned short>::N
			} ___u1;
			std::uint16_t m_parentIdx;
			std::uint16_t m_skipNodeIdx;
		};

		class NodeManager
		{
		public:
			// members
			hkArray<Node, hkContainerHeapAllocator> m_nodes;
			hkArray<U, hkContainerHeapAllocator> m_freeList;
		};

		virtual ~hkAabbTree() = default;  // 00

		// members
		Node* m_rootNode;
		std::uint16_t m_rootIdx;
		std::int32_t m_numLeaves;
		NodeManager m_nodeManager;
		hkVector4 m_bitOffsetLow;
		hkVector4 m_bitOffsetHigh;
		hkVector4 m_bitScale;
		hkVector4 m_bitScaleInv;
	};
}
