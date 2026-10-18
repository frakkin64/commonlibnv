#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDisplayAABB.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkProcessContext;

	class hkpMidphaseViewer :
		public hkpWorldViewerBase,  // 00
		public hkpWorldPostSimulationListener  // 28
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMidphaseViewer };
		static constexpr auto VTABLE{ VTABLE::hkpMidphaseViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpMidphaseViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpMidphaseViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpMidphaseViewer::registerViewer };
			func();
		}

	protected:
		hkpMidphaseViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpMidphaseViewer*(__thiscall*)(hkpMidphaseViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpMidphaseViewer::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkArray<hkDisplayAABB, hkContainerHeapAllocator> m_broadPhaseDisplayGeometries;  // 2C?
	};
}
