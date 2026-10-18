#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMemoryBlockServer.h"

namespace RE
{
	class hkBool;
	class hkMemoryAllocator;

	class hkSystemMemoryBlockServer :
		public hkMemoryBlockServer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSystemMemoryBlockServer };
		static constexpr auto VTABLE{ VTABLE::hkSystemMemoryBlockServer };

		// override (hkMemoryBlockServer)
		virtual ~hkSystemMemoryBlockServer() = default;                                                                                    // 00
		virtual hkBool* isSingleBlockServer(hkBool* a_arg1) override;                                                                      // 01
		virtual std::uint32_t recommendSize(std::uint32_t a_arg1) override;                                                                // 02
		virtual void* allocate(std::uint32_t a_arg1, std::uint32_t* a_arg2) override;                                                      // 03
		virtual void free(void* a_arg1, std::uint32_t a_arg2) override;                                                                    // 04
		virtual hkBool* resize(hkBool* a_arg1, void* a_arg2, std::uint32_t a_arg3, std::uint32_t a_arg4, std::uint32_t* a_arg5) override;  // 05
		virtual std::uint32_t getTotalAvailableMemory() override;                                                                          // 06
		virtual std::uint32_t getMemoryLimit() override;                                                                                   // 07
		virtual hkBool* setMemoryLimit(hkBool* a_arg1, std::uint32_t a_arg2) override;                                                     // 08
		virtual void* criticalAlloc(std::uint32_t a_arg1) override;                                                                        // 09
		virtual void criticalFree(void* a_arg1, std::uint32_t a_arg2) override;                                                            // 0A

		hkSystemMemoryBlockServer* ctor(hkMemoryAllocator* system, std::uint32_t minBlockSize)
		{
			using func_t = hkSystemMemoryBlockServer*(__thiscall*)(hkSystemMemoryBlockServer*, hkMemoryAllocator*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::hkSystemMemoryBlockServer::ctor };
			return func(this, system, minBlockSize);
		}

	public:
		// members
		std::uint32_t      m_allocated;    // 08
		std::uint32_t      m_memoryLimit;  // 0C
		hkMemoryAllocator* m_system;       // 10
	};
}
