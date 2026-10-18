#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkJobQueueHwSetup
	{
	public:
		enum class CellRules : std::int32_t
		{
			kPPU_CAN_TAKE_SPU_TASKS = 0x0,
			kPPU_CANNOT_TAKE_SPU_TASKS = 0x1,
		};

		hkJobQueueHwSetup& operator_call(hkJobQueueHwSetup const& __that)
		{
			using func_t = decltype(&hkJobQueueHwSetup::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueueHwSetup::operator_call };
			return func(this, __that);
		}

	public:
		// members
		hkJobQueueHwSetup::CellRules                                                       m_cellRules;               // 00?
		hkBool                                                                             m_noSpu;                   // 04?
		std::uint8_t                                                                       pad05[0x3];                // 05
		std::int32_t                                                                       m_numCpuThreads;           // 08?
		hkArray<hkArray<std::int32_t, hkContainerHeapAllocator>, hkContainerHeapAllocator> m_threadIdsSharingCaches;  // 0C?
	};
}
