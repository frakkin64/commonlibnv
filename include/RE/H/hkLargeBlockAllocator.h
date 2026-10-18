#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFreeListAllocatorServer.h"
#include "RE/H/hkMemChunk.h"
#include "RE/H/hkMemPage.h"

namespace RE
{
	class hkBool;
	class hkLargeBlockLimitedMemoryListener;
	class hkMemTreeChunk;
	class hkMemoryBlockServer;

	class hkLargeBlockAllocator :
		public hkFreeListAllocatorServer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkLargeBlockAllocator };
		static constexpr auto VTABLE{ VTABLE::hkLargeBlockAllocator };

		// override (hkFreeListAllocatorServer)
		virtual ~hkLargeBlockAllocator() = default;                                                       // 00
		virtual void* alloc(std::uint32_t a_arg1) override;                                               // 01
		virtual void free(void* a_arg1) override;                                                         // 02
		virtual hkBool* isValidAlloc(hkBool* a_arg1, void* a_arg2) override;                              // 03
		virtual std::uint32_t getAllocatedSize(const void* a_arg1, std::uint32_t a_arg2) override;        // 04
		virtual std::uint32_t getAllocatedSizeWithOverhead(void* a_arg1, std::uint32_t a_arg2) override;  // 05
		virtual void* criticalAlloc(std::uint32_t a_arg1) override;                                       // 06
		virtual void criticalFree(void* a_arg1, std::uint32_t a_arg2) override;                           // 07

		hkLargeBlockAllocator* ctor(hkMemoryBlockServer* server)
		{
			using func_t = hkLargeBlockAllocator*(__thiscall*)(hkLargeBlockAllocator*, hkMemoryBlockServer*);
			static REL::Relocation<func_t> func{ Offsets::hkLargeBlockAllocator::ctor };
			return func(this, server);
		}

	public:
		// members
		hkLargeBlockLimitedMemoryListener* m_limitedListener;              // 04
		std::uint32_t                      m_treemap;                      // 08
		char*                              m_leastAddr;                    // 0C?
		hkMemChunk*                        m_top;                          // 10?
		std::uint32_t                      m_topsize;                      // 14?
		hkMemTreeChunk*                    m_treebins[32];                 // 18?
		hkMemoryBlockServer*               m_server;                       // 98?
		hkMemChunk                         m_zeroChunk;                    // 9C?
		hkMemPage                          m_pages;                        // A4?
		std::uint32_t                      m_sumAllocatedWithMgrOverhead;  // BC?
		std::uint32_t                      m_sumAllocatedSize;             // C0?
	};
}
