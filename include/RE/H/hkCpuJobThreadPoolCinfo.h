#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkCpuJobThreadPoolCinfo
	{
	public:
		hkCpuJobThreadPoolCinfo* ctor()
		{
			using func_t = hkCpuJobThreadPoolCinfo*(__thiscall*)(hkCpuJobThreadPoolCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkCpuJobThreadPoolCinfo::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t                                    m_numThreads;                      // 00
		std::int32_t                                    m_havokStackSize;                  // 04
		std::int32_t                                    m_stackSize;                       // 08
		std::int32_t                                    m_timerBufferPerThreadAllocation;  // 0C
		hkArray<std::int32_t, hkContainerHeapAllocator> m_hardwareThreadIds;               // 10
		const char*                                     m_threadName;                      // 1C
	};
}
