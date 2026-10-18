#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkStreamStatisticsCollector.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkProcessContext;
	class hkVtableClassRegistry;

	class hkpWorldMemoryViewer :
		public hkpWorldViewerBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldMemoryViewer };
		static constexpr auto VTABLE{ VTABLE::hkpWorldMemoryViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpWorldMemoryViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpWorldMemoryViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldMemoryViewer::registerViewer };
			func();
		}

	protected:
		hkpWorldMemoryViewer* ctor(hkVtableClassRegistry* vtlbReg, hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpWorldMemoryViewer*(__thiscall*)(hkpWorldMemoryViewer*, hkVtableClassRegistry*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldMemoryViewer::ctor };
			return func(this, vtlbReg, contexts);
		}

	public:
		// members
		hkStreamStatisticsCollector m_collector;  // 28?
	};
}
