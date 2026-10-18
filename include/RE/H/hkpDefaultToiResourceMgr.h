#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkpToiEvent.h"
#include "RE/H/hkpToiResourceMgr.h"
#include "RE/H/hkpToiResourceMgrResponse.h"
#include "RE/H/hkpToiResourceMgr_ConstraintViolationInfo.h"

namespace RE
{
	class hkpToiResources;

	class hkpDefaultToiResourceMgr :
		public hkpToiResourceMgr  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDefaultToiResourceMgr };
		static constexpr auto VTABLE{ VTABLE::hkpDefaultToiResourceMgr };

		// override (hkpToiResourceMgr)
		virtual ~hkpDefaultToiResourceMgr() = default;  // 00

		// add
		virtual hkResult beginToiAndSetupResources(hkpToiEvent const& event, hkArray<hkpToiEvent, hkContainerHeapAllocator> const& otherEvents, hkpToiResources& resourcesOut);  // 03
		virtual hkpToiResourceMgrResponse cannotSolve(hkArray<hkpToiResourceMgr_ConstraintViolationInfo, hkContainerHeapAllocator>& violatedConstraints);                        // 04
		virtual hkpToiResourceMgrResponse resourcesDepleted();                                                                                                                   // 05
		virtual void endToiAndFreeResources(hkpToiEvent const& event, hkArray<hkpToiEvent, hkContainerHeapAllocator> const& otherEvents, hkpToiResources const& resources);      // 06

		hkpDefaultToiResourceMgr* ctor()
		{
			using func_t = hkpDefaultToiResourceMgr*(__thiscall*)(hkpDefaultToiResourceMgr*);
			static REL::Relocation<func_t> func{ Offsets::hkpDefaultToiResourceMgr::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t m_scratchPadCapacity;     // 08
		std::int32_t m_defaultScratchpadSize;  // 0C?
	};
}
