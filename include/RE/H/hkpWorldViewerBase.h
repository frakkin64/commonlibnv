#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkProcess.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpPhysicsContextWorldListener.h"

namespace RE
{
	class hkProcessContext;
	class hkpPhysicsContext;

	class hkpWorldViewerBase :
		public hkReferencedObject,  // 00
		public hkProcess,  // 08
		public hkpPhysicsContextWorldListener  // 20
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldViewerBase };
		static constexpr auto VTABLE{ VTABLE::hkpWorldViewerBase };

		// override (hkReferencedObject)
		virtual ~hkpWorldViewerBase() = default;  // 00

		hkpWorldViewerBase* ctor(hkArray<hkProcessContext*, hkContainerHeapAllocator> const& contexts)
		{
			using func_t = hkpWorldViewerBase*(__thiscall*)(hkpWorldViewerBase*, hkArray<hkProcessContext*, hkContainerHeapAllocator> const&);
			static REL::Relocation<func_t> func{ Offsets::hkpWorldViewerBase::ctor };
			return func(this, contexts);
		}

	public:
		// members
		hkpPhysicsContext* m_context;  // 24
	};
	static_assert(sizeof(hkpWorldViewerBase) == 0x28);
}
