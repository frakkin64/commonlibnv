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

	class hkpBroadphaseViewer :
		public hkpWorldViewerBase,  // 00
		public hkpWorldPostSimulationListener  // 28
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBroadphaseViewer };
		static constexpr auto VTABLE{ VTABLE::hkpBroadphaseViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpBroadphaseViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpBroadphaseViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpBroadphaseViewer::registerViewer };
			func();
		}

	protected:
		hkpBroadphaseViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpBroadphaseViewer*(__thiscall*)(hkpBroadphaseViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpBroadphaseViewer::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkArray<hkDisplayAABB, hkContainerHeapAllocator> m_broadPhaseDisplayGeometries;  // 2C?
	};
}
