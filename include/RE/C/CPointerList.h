#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/Node.h"

namespace RE
{
	class NodeBlock;
	class T;

	template <class T, std::size_t N0, std::size_t N1, std::size_t N2>
	class CPointerList
	{
	public:
		class Node
		{
		public:
			// members
			T* pValue;
			Node* pNext;
			Node* pPrev;
		};

		class NodeBlock
		{
		public:
			// members
			NodeBlock* pNext;
			Node Element[N0];
		};

		// members
		Node* m_pFree;
		NodeBlock* m_pBlocks;
		std::uint8_t m_aFixedBlock[16];
		Node* m_pHead;
		Node* m_pTail;
		std::uint32_t m_nEntries;
		std::uint32_t m_nNodesAllocated;
	};
}
