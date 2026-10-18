#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkCriticalSection.h"
#include "RE/H/hkMapBase.h"
#include "RE/H/hkMapOperations.h"
#include "RE/H/hkMemoryAllocator.h"
#include "RE/H/hkStackTracer_CallTree.h"

namespace RE
{
	class hkMemoryAllocator_MemoryStatistics;
	class hkStackTracer;

	class hkLeakDetectAllocator :
		public hkMemoryAllocator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkLeakDetectAllocator };
		static constexpr auto VTABLE{ VTABLE::hkLeakDetectAllocator };

		class AllocInfo;
		class Dynamic;

		class AllocInfo
		{
		public:
			// members
			std::int32_t traceId;     // 00?
			std::int32_t size;        // 04?
			hkBool       isBuf;       // 08?
			std::uint8_t pad09[0x3];  // 09
		};

		class Dynamic
		{
		public:
			// members
			hkMapBase<std::uint32_t, hkLeakDetectAllocator::AllocInfo, hkMapOperations<std::uint32_t>> m_activePointers;  // 00?
		};

		// override (hkMemoryAllocator)
		virtual ~hkLeakDetectAllocator() = default;                                                            // 00
		virtual void* blockAlloc(std::int32_t a_arg1) override;                                                // 01
		virtual void blockFree(void* a_arg1, std::int32_t a_arg2) override;                                    // 02
		virtual void* bufAlloc(std::int32_t& reqBytesInOut) override;                                          // 03
		virtual void bufFree(void* p, std::int32_t numBytes) override;                                         // 04
		virtual void* bufRealloc(void* pold, std::int32_t oldNumBytes, std::int32_t& reqBytesInOut) override;  // 05
		virtual void getMemoryStatistics(hkMemoryAllocator_MemoryStatistics* a_arg1) override;                 // 0A
		virtual std::int32_t getAllocatedSize(const void* a_arg1, std::int32_t a_arg2) override;               // 0B

		void quit()
		{
			using func_t = decltype(&hkLeakDetectAllocator::quit);
			static REL::Relocation<func_t> func{ Offsets::hkLeakDetectAllocator::quit };
			func(this);
		}

	protected:
		void danger(char const* message, void const* ptr, hkLeakDetectAllocator::AllocInfo const& info) const
		{
			using func_t = decltype(&hkLeakDetectAllocator::danger);
			static REL::Relocation<func_t> func{ Offsets::hkLeakDetectAllocator::danger };
			func(this, message, ptr, info);
		}

		void checkedFree(std::int32_t isBuf, void* p, std::int32_t numBytes)
		{
			using func_t = decltype(&hkLeakDetectAllocator::checkedFree);
			static REL::Relocation<func_t> func{ Offsets::hkLeakDetectAllocator::checkedFree };
			func(this, isBuf, p, numBytes);
		}

	public:
		// members
		hkStackTracer*                  m_stackTracer;      // 04?
		hkStackTracer_CallTree          m_callTree;         // 08?
		hkCriticalSection               m_criticalSection;  // 18?
		hkMemoryAllocator*              m_childAllocator;   // 34?
		hkMemoryAllocator*              m_debugAllocator;   // 38?
		void*                           m_outputFunc;       // 3C?
		void*                           m_outputFuncArg;    // 40?
		hkLeakDetectAllocator::Dynamic* m_dynamic;          // 44?
		std::uint32_t                   m_inUse;            // 48?
	};
}
