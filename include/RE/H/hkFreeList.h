#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkFreeListAllocatorServer;

	class hkFreeList
	{
	public:
		class Block;
		class Element;

		class Block
		{
		public:
			// members
			hkFreeList::Block* m_next;         // 00?
			std::uint32_t      m_blockSize;    // 04?
			std::uint8_t*      m_start;        // 08?
			std::uint32_t      m_numElements;  // 0C?
		};

		class Element
		{
		public:
			// members
			hkFreeList::Element* m_next;  // 00?
		};

		// members
		hkFreeList::Element*       m_free;                  // 00?
		std::uint32_t              m_elementSize;           // 04?
		hkFreeList::Block*         m_lastIncrementalBlock;  // 08?
		hkFreeList::Block*         m_blocks;                // 0C?
		hkFreeList::Block*         m_freeBlocks;            // 10?
		std::uint32_t              m_blockSize;             // 14?
		std::uint32_t              m_align;                 // 18?
		std::uint32_t              m_maxBlockSize;          // 1C?
		std::uint8_t*              m_top;                   // 20?
		std::uint8_t*              m_blockEnd;              // 24?
		std::uint32_t              m_numFreeElements;       // 28?
		std::uint32_t              m_totalNumElements;      // 2C?
		hkFreeListAllocatorServer* m_memoryServer;          // 30?
	};
}
