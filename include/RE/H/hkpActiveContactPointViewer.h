#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpContactPointViewer.h"

namespace RE
{
	class hkProcessContext;

	class hkpActiveContactPointViewer :
		public hkpContactPointViewer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpActiveContactPointViewer };
		static constexpr auto VTABLE{ VTABLE::hkpActiveContactPointViewer };

		// override (hkpContactPointViewer)
		virtual ~hkpActiveContactPointViewer() = default;  // 00

		static void registerViewer()
		{
			using func_t = decltype(&hkpActiveContactPointViewer::registerViewer);
			static REL::Relocation<func_t> func{ Offsets::hkpActiveContactPointViewer::registerViewer };
			func();
		}

	protected:
		hkpActiveContactPointViewer* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpActiveContactPointViewer*(__thiscall*)(hkpActiveContactPointViewer*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpActiveContactPointViewer::ctor };
			return func(this, contexts);
		}
	};
}
