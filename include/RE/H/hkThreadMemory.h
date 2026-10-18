#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMemoryAllocator.h"
#include "RE/H/hkThreadMemory_FreeList.h"

namespace RE
{
	class hkMemoryAllocator_MemoryStatistics;

	class hkThreadMemory :
		public hkMemoryAllocator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkThreadMemory };
		static constexpr auto VTABLE{ VTABLE::hkThreadMemory };

		using FreeList = hkThreadMemory_FreeList;

		// override (hkMemoryAllocator)
		virtual ~hkThreadMemory() = default;                                                                   // 00
		virtual void* blockAlloc(std::int32_t a_arg1) override;                                                // 01
		virtual void blockFree(void* a_arg1, std::int32_t a_arg2) override;                                    // 02
		virtual void* bufAlloc(std::int32_t& reqBytesInOut) override;                                          // 03
		virtual void bufFree(void* p, std::int32_t numBytes) override;                                         // 04
		virtual void* bufRealloc(void* pold, std::int32_t oldNumBytes, std::int32_t& reqBytesInOut) override;  // 05
		virtual void blockAllocBatch(void** ptrsOut, std::int32_t numPtrs, std::int32_t blockSize) override;   // 06
		virtual void blockFreeBatch(void** ptrsIn, std::int32_t numPtrs, std::int32_t blockSize) override;     // 07
		virtual bool canAllocTotal(std::int32_t numBytes) override;                                            // 09
		virtual void getMemoryStatistics(hkMemoryAllocator_MemoryStatistics* a_arg1) override;                 // 0A
		virtual std::int32_t getAllocatedSize(const void* a_arg1, std::int32_t a_arg2) override;               // 0B

		// add
		virtual void releaseCachedMemory();  // 0D

		// members
		hkMemoryAllocator*      m_memory;                     // 04
		std::int32_t            m_maxNumElemsOnFreeList;      // 08
		hkThreadMemory_FreeList m_free_list[17];              // 0C
		std::int32_t            m_row_to_size_lut[17];        // 94?
		char                    m_small_size_to_row_lut[41];  // D8?
		std::uint8_t            pad101[0x3];                  // 101
		std::int32_t            m_large_size_to_row_lut[8];   // 104?
	};
}
