#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDisplayAABB.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkProcessContext;

	class hkpSimulationIslandViewer :
		public hkpWorldViewerBase,  // 00
		public hkpWorldPostSimulationListener  // 28
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimulationIslandViewer };
		static constexpr auto VTABLE{ VTABLE::hkpSimulationIslandViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpSimulationIslandViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpSimulationIslandViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpSimulationIslandViewer::registerViewer };
			func();
		}

	protected:
		hkpSimulationIslandViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpSimulationIslandViewer*(__thiscall*)(hkpSimulationIslandViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpSimulationIslandViewer::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkBool                                           m_showActiveIslands;                // 2C?
		hkBool                                           m_showInactiveIslands;              // 2D?
		std::uint16_t                                    pad2E;                              // 2E
		hkArray<hkDisplayAABB, hkContainerHeapAllocator> m_inactiveIslandDisplayGeometries;  // 30?
		hkArray<hkDisplayAABB, hkContainerHeapAllocator> m_activeIslandDisplayGeometries;    // 3C?
	};
}
