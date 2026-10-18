#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkProcess.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkClass;
	class hkProcessContext;
	class hkVisualDebugger;

	class hkInspectProcess :
		public hkReferencedObject,  // 00
		public hkProcess  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkInspectProcess };
		static constexpr auto VTABLE{ VTABLE::hkInspectProcess };

		class ObjectPair;

		class ObjectPair
		{
		public:
			// members
			const void*    obj;    // 00?
			const hkClass* klass;  // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkInspectProcess() = default;  // 00

		hkInspectProcess* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkInspectProcess*(__thiscall*)(hkInspectProcess*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkInspectProcess::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkArray<hkInspectProcess::ObjectPair, hkContainerHeapAllocator> m_autoUpdateList;  // 20?
		hkVisualDebugger*                                               m_vdb;             // 2C?
	};
}
