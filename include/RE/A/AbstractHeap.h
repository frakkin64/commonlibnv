#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCriticalSection.h"
#include "RE/F/FreeHeapBlockList.h"
#include "RE/H/HeapFreeSubBucket.h"
#include "RE/I/IMemoryHeap.h"

namespace RE
{
	class HeapBlock;

	class AbstractHeap :
		public IMemoryHeap  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AbstractHeap };
		static constexpr auto VTABLE{ VTABLE::AbstractHeap };

		// add
		virtual void Unk_0C();  // 0C
		virtual void Unk_0D();  // 0D
		virtual void Unk_0E();  // 0E
		virtual void Unk_0F();  // 0F
		virtual void Unk_10();  // 10
		virtual void Unk_11();  // 11

	protected:
		void* BaseAllocate(std::uint32_t aSize)
		{
			using func_t = decltype(&AbstractHeap::BaseAllocate);
			static REL::Relocation<func_t> func{ Offsets::AbstractHeap::BaseAllocate };
			return func(this, aSize);
		}

	public:
		// members
		const char*        pName;                  // 04
		std::uint8_t       pad08[0x24];            // 08
		std::int32_t       iDefaultAlignment;      // 2C
		std::uint32_t      MinFreeBlockSize;       // 30
		std::uint32_t      iPageSize;              // 34
		std::uint32_t      MemHeapSize;            // 38
		std::uint32_t      iInitialSize;           // 3C
		std::uint32_t      iCurrentSize;           // 40
		std::uint32_t      iWastedMemory;          // 44?
		std::int32_t       iMemAllocated;          // 48?
		std::int32_t       iMemAllocatedHigh;      // 4C?
		std::int32_t       iBlockMemAllocated;     // 50?
		char*              pMemHeap;               // 54?
		std::int32_t       iNumBlocks;             // 58?
		HeapBlock*         pBlockHead;             // 5C?
		HeapBlock*         pBlockTail;             // 60?
		std::int32_t       iNumFreeBlocks;         // 64?
		FreeHeapBlockList  pSmallFreeList[1024];   // 68?
		FreeHeapBlockList* pLastSmallList;         // 2068?
		FreeHeapBlockList  LargeFreeList;          // 206C?
		HeapBlock**        pDelayedFreeBlocksA;    // 2074?
		std::uint32_t      iNextDelayedFreeIndex;  // 2078?
		HeapFreeSubBucket  pSubBuckets[16];        // 207C?
		BSCriticalSection  CriticalSectionO;       // 20FC?
	};
}
