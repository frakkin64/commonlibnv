#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFreeList.h"
#include "RE/H/hkLargeBlockAllocator.h"
#include "RE/H/hkMemoryAllocator.h"
#include "RE/H/hkResult.h"

namespace RE
{
	class hkBool;
	class hkMemoryAllocator_MemoryStatistics;
	class hkMemoryBlockServer;
	class hkOstream;

	class hkFreeListAllocator :
		public hkMemoryAllocator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkFreeListAllocator };
		static constexpr auto VTABLE{ VTABLE::hkFreeListAllocator };

		// override (hkMemoryAllocator)
		virtual ~hkFreeListAllocator() = default;                                                             // 00
		virtual void* blockAlloc(std::int32_t a_arg1) override;                                               // 01
		virtual void blockFree(void* a_arg1, std::int32_t a_arg2) override;                                   // 02
		virtual void* bufAlloc(std::int32_t& reqBytesInOut) override;                                         // 03
		virtual void blockAllocBatch(void** ptrsOut, std::int32_t numPtrs, std::int32_t blockSize) override;  // 06
		virtual void blockFreeBatch(void** ptrsIn, std::int32_t numPtrs, std::int32_t blockSize) override;    // 07
		virtual bool canAllocTotal(std::int32_t numBytes) override;                                           // 09
		virtual void getMemoryStatistics(hkMemoryAllocator_MemoryStatistics* a_arg1) override;                // 0A
		virtual std::int32_t getAllocatedSize(const void* a_arg1, std::int32_t a_arg2) override;              // 0B
		virtual void resetPeakMemoryStatistics() override;                                                    // 0C

		// add
		virtual void quit();                                               // 0D
		virtual void printStatistics(hkOstream* c);                        // 0E
		virtual void reservePagesFromSystemMemory(std::int32_t numBytes);  // 0F
		virtual void garbageCollect();                                     // 10
		virtual void incrementalGarbageCollect(std::int32_t numBlocks);    // 11
		virtual void optimize();                                           // 12
		virtual void setMemorySoftLimit(std::uint32_t maxMemory);          // 13
		virtual std::uint32_t getMemorySoftLimit();                        // 14
		virtual void releaseUnusedPagesToSystemMemory();                   // 15
		virtual hkBool* isOk(hkBool* a_arg1);                              // 16
		virtual hkResult walkMemory(void* callback, void* param);          // 17

		hkFreeListAllocator* ctor(hkMemoryBlockServer* server)
		{
			using func_t = hkFreeListAllocator*(__thiscall*)(hkFreeListAllocator*, hkMemoryBlockServer*);
			static REL::Relocation<func_t> func{ Offsets::hkFreeListAllocator::ctor };
			return func(this, server);
		}

	public:
		// members
		// not placed: m_criticalSection, m_totalBytesInFreeLists, m_peakInUse, m_server
		std::uint8_t          pad04[0x14];                 // 04
		hkLargeBlockAllocator m_largeAllocator;            // 18
		hkFreeList*           m_sizeToFreeList[41];        // DC?
		hkFreeList*           m_freeLists[41];             // 180?
		std::int32_t          m_numFreeLists;              // 224?
		hkFreeList*           m_topFreeList;               // 228?
		hkFreeList*           m_lastFreeList;              // 22C?
		hkFreeList            m_freeListMemory[41];        // 230?
		std::uint32_t         m_softLimit;                 // A84?
		std::int32_t          m_incrementalFreeListIndex;  // A88?
	};
}
