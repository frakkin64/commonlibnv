#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpWorldPostSimulationListener.h"
#include "RE/H/hkpWorldViewerBase.h"

namespace RE
{
	class hkProcessContext;

	class hkpWeldingViewer :
		public hkpWorldViewerBase,  // 00
		public hkpWorldPostSimulationListener  // 28
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWeldingViewer };
		static constexpr auto VTABLE{ VTABLE::hkpWeldingViewer };

		// override (hkpWorldViewerBase)
		virtual ~hkpWeldingViewer() = default;  // 00

	protected:
		hkpWeldingViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpWeldingViewer*(__thiscall*)(hkpWeldingViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpWeldingViewer::ctor };
			return func(this, contexts);
		}
	};
}
