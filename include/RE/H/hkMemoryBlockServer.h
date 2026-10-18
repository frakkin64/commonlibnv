#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkBool;

	class __declspec(novtable) hkMemoryBlockServer
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryBlockServer };
		static constexpr auto VTABLE{ VTABLE::hkMemoryBlockServer };

		// add
		virtual ~hkMemoryBlockServer() = default;                                                                                 // 00
		virtual hkBool* isSingleBlockServer(hkBool* a_arg1);                                                                      // 01
		virtual std::uint32_t recommendSize(std::uint32_t a_arg1);                                                                // 02
		virtual void* allocate(std::uint32_t a_arg1, std::uint32_t* a_arg2);                                                      // 03
		virtual void free(void* a_arg1, std::uint32_t a_arg2);                                                                    // 04
		virtual hkBool* resize(hkBool* a_arg1, void* a_arg2, std::uint32_t a_arg3, std::uint32_t a_arg4, std::uint32_t* a_arg5);  // 05
		virtual std::uint32_t getTotalAvailableMemory();                                                                          // 06
		virtual std::uint32_t getMemoryLimit();                                                                                   // 07
		virtual hkBool* setMemoryLimit(hkBool* a_arg1, std::uint32_t a_arg2);                                                     // 08
		virtual void* criticalAlloc(std::uint32_t a_arg1);                                                                        // 09
		virtual void criticalFree(void* a_arg1, std::uint32_t a_arg2);                                                            // 0A

		// members
		std::uint32_t m_minAllocSize;  // 04
	};
	static_assert(sizeof(hkMemoryBlockServer) == 0x8);
}
