#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkClassNameRegistry.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkStringMap.h"

namespace RE
{
	class hkClass;

	class hkDynamicClassNameRegistry :
		public hkClassNameRegistry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDynamicClassNameRegistry };
		static constexpr auto VTABLE{ VTABLE::hkDynamicClassNameRegistry };

		// override (hkClassNameRegistry)
		virtual ~hkDynamicClassNameRegistry() = default;  // 00

		// add
		virtual const char* getName() const;                                                            // 03
		virtual const hkClass* getClassByName(const char* a_arg1) const;                                // 04
		virtual void getClasses(hkArray<hkClass const*, hkContainerHeapAllocator>* a_arg1) const;       // 05
		virtual void setName(char const* name);                                                         // 06
		virtual void registerClass(hkClass const* klass, char const* name);                             // 07
		virtual void registerList(hkClass const* const* classes);                                       // 08
		virtual void merge(hkStringMap<hkClass const*, hkContainerHeapAllocator> const& mergeFromMap);  // 0A (reversed overload group)
		virtual void merge(hkClassNameRegistry const& mergeFrom);                                       // 09 (reversed overload group)

		// members
		const char*                                           m_name;  // 08
		hkStringMap<hkClass const*, hkContainerHeapAllocator> m_map;   // 0C
	};
}
