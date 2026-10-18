#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkBool;

	class __declspec(novtable) hkFreeListAllocatorServer
	{
	public:
		static constexpr auto RTTI{ RTTI::hkFreeListAllocatorServer };
		static constexpr auto VTABLE{ VTABLE::hkFreeListAllocatorServer };

		// add
		virtual ~hkFreeListAllocatorServer() = default;                                          // 00
		virtual void* alloc(std::uint32_t a_arg1);                                               // 01
		virtual void free(void* a_arg1);                                                         // 02
		virtual hkBool* isValidAlloc(hkBool* a_arg1, void* a_arg2);                              // 03
		virtual std::uint32_t getAllocatedSize(const void* a_arg1, std::uint32_t a_arg2);        // 04
		virtual std::uint32_t getAllocatedSizeWithOverhead(void* a_arg1, std::uint32_t a_arg2);  // 05
		virtual void* criticalAlloc(std::uint32_t a_arg1);                                       // 06
		virtual void criticalFree(void* a_arg1, std::uint32_t a_arg2);                           // 07
	};
	static_assert(sizeof(hkFreeListAllocatorServer) == 0x4);
}
