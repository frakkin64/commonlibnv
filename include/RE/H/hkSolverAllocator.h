#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkCriticalSection.h"
#include "RE/H/hkMemoryAllocator.h"

namespace RE
{
	class hkMemoryAllocator_MemoryStatistics;

	class hkSolverAllocator :
		public hkMemoryAllocator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSolverAllocator };
		static constexpr auto VTABLE{ VTABLE::hkSolverAllocator };

		class Element;

		class Element
		{
		public:
			// members
			char*        m_start;  // 00?
			std::int32_t m_size;   // 04?
		};

		// override (hkMemoryAllocator)
		virtual ~hkSolverAllocator() = default;                                                   // 00
		virtual void* blockAlloc(std::int32_t a_arg1) override;                                   // 01
		virtual void blockFree(void* a_arg1, std::int32_t a_arg2) override;                       // 02
		virtual void* bufAlloc(std::int32_t& reqBytesInOut) override;                             // 03
		virtual void bufFree(void* p, std::int32_t numBytes) override;                            // 04
		virtual bool canAllocSingleBlock(std::int32_t numBytes) override;                         // 08
		virtual void getMemoryStatistics(hkMemoryAllocator_MemoryStatistics* a_arg1) override;    // 0A
		virtual std::int32_t getAllocatedSize(const void* a_arg1, std::int32_t a_arg2) override;  // 0B
		virtual void resetPeakMemoryStatistics() override;                                        // 0C

		hkSolverAllocator* ctor()
		{
			using func_t = hkSolverAllocator*(__thiscall*)(hkSolverAllocator*);
			static REL::Relocation<func_t> func{ Offsets::hkSolverAllocator::ctor };
			return func(this);
		}

	public:
		// members
		char*                                   m_bufferStart;         // 04
		char*                                   m_bufferEnd;           // 08
		char*                                   m_currentEnd;          // 0C
		std::int32_t                            m_numAllocatedBlocks;  // 10
		std::uint32_t                           m_peakUse;             // 14
		hkArrayBase<hkSolverAllocator::Element> m_freeElems;           // 18
		hkSolverAllocator::Element              m_elemsBuf[32];        // 24
		hkCriticalSection                       m_criticalSection;     // 124
	};
}
