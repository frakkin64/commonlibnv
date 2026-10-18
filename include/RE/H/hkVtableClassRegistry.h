#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkClass;

	class hkVtableClassRegistry :
		public hkReferencedObject,  // 00
		public hkSingleton<hkVtableClassRegistry>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkVtableClassRegistry };
		static constexpr auto VTABLE{ VTABLE::hkVtableClassRegistry };

		// override (hkReferencedObject)
		virtual ~hkVtableClassRegistry() = default;  // 00

		// add
		virtual void registerVtable(void const* vtable, hkClass const* klass);                     // 03
		virtual const hkClass* getClassFromVirtualInstance(const void* a_arg1);                    // 04
		virtual void getClasses(hkArray<hkClass const*, hkContainerHeapAllocator>* a_arg1) const;  // 05

		// members
		hkPointerMap<void const*, hkClass const*, hkContainerHeapAllocator> m_map;  // 08?
	};
}
