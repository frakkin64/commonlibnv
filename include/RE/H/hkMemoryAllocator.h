#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMemoryAllocator_MemoryStatistics.h"

namespace RE
{
	class __declspec(novtable) hkMemoryAllocator
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryAllocator };
		static constexpr auto VTABLE{ VTABLE::hkMemoryAllocator };

		using MemoryStatistics = hkMemoryAllocator_MemoryStatistics;

		// add
		virtual ~hkMemoryAllocator() = default;                                                       // 00
		virtual void* blockAlloc(std::int32_t a_arg1);                                                // 01
		virtual void blockFree(void* a_arg1, std::int32_t a_arg2);                                    // 02
		virtual void* bufAlloc(std::int32_t& reqBytesInOut);                                          // 03
		virtual void bufFree(void* p, std::int32_t numBytes);                                         // 04
		virtual void* bufRealloc(void* pold, std::int32_t oldNumBytes, std::int32_t& reqBytesInOut);  // 05
		virtual void blockAllocBatch(void** ptrsOut, std::int32_t numPtrs, std::int32_t blockSize);   // 06
		virtual void blockFreeBatch(void** ptrsIn, std::int32_t numPtrs, std::int32_t blockSize);     // 07
		virtual bool canAllocSingleBlock(std::int32_t numBytes);                                      // 08
		virtual bool canAllocTotal(std::int32_t numBytes);                                            // 09
		virtual void getMemoryStatistics(hkMemoryAllocator_MemoryStatistics* a_arg1);                 // 0A
		virtual std::int32_t getAllocatedSize(const void* a_arg1, std::int32_t a_arg2);               // 0B
		virtual void resetPeakMemoryStatistics();                                                     // 0C
	};
}
