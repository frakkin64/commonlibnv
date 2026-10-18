#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpContactPointViewer.h"

namespace RE
{
	class hkProcessContext;

	class hkpInactiveContactPointViewer :
		public hkpContactPointViewer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpInactiveContactPointViewer };
		static constexpr auto VTABLE{ VTABLE::hkpInactiveContactPointViewer };

		// override (hkpContactPointViewer)
		virtual ~hkpInactiveContactPointViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpInactiveContactPointViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpInactiveContactPointViewer::registerViewer };
			func();
		}

	protected:
		hkpInactiveContactPointViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpInactiveContactPointViewer*(__thiscall*)(hkpInactiveContactPointViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpInactiveContactPointViewer::ctor };
			return func(this, contexts);
		}
	};
}
