#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSpinLock.h"

namespace RE
{
	class MemoryPool
	{
	public:
		class FreePoolBlock;

		class FreePoolBlock
		{
		public:
			// members
			MemoryPool::FreePoolBlock* pPrevious;  // 00?
			MemoryPool::FreePoolBlock* pNext;      // 04?
		};

		void* Allocate(std::uint32_t requested)
		{
			using func_t = decltype(&MemoryPool::Allocate);
			static REL::Relocation<func_t> func{ Offsets::MemoryPool::Allocate };
			return func(this, requested);
		}

		void Free(void* apPointer)
		{
			using func_t = decltype(&MemoryPool::Free);
			static REL::Relocation<func_t> func{ Offsets::MemoryPool::Free };
			func(this, apPointer);
		}

		void CheckFreeBlocks()
		{
			using func_t = decltype(&MemoryPool::CheckFreeBlocks);
			static REL::Relocation<func_t> func{ Offsets::MemoryPool::CheckFreeBlocks };
			func(this);
		}

	protected:
		void FreeUnusedPages()
		{
			using func_t = decltype(&MemoryPool::FreeUnusedPages);
			static REL::Relocation<func_t> func{ Offsets::MemoryPool::FreeUnusedPages };
			func(this);
		}

	public:
		// members
		const char*                pDescription;        // 00?
		char*                      pHeap;               // 04
		MemoryPool::FreePoolBlock* pFreeHead;           // 08
		std::uint8_t               pad0C[0x14];         // 0C
		BSSpinLock                 CriticalSectionO;    // 20
		std::uint32_t              iAlignedBlockSize;   // 28
		std::uint32_t              iHighCommitedPages;  // 2C
		std::uint16_t*             pPageRefCount;       // 30
		std::uint32_t              iNumPages;           // 34
		std::uint32_t              iPoolSize;           // 38
		std::uint32_t              iNumFreeBlocks;      // 3C
		std::uint32_t              iNumCommittedPages;  // 40
	};
}
