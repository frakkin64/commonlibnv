#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkxAttributeGroup.h"

namespace RE
{
	class hkxAttributeHolder :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxAttributeHolder };
		static constexpr auto VTABLE{ VTABLE::hkxAttributeHolder };

		// override (hkReferencedObject)
		virtual ~hkxAttributeHolder() = default;  // 00

		hkxAttributeHolder* ctor(hkxAttributeHolder const& other)
		{
			using func_t = hkxAttributeHolder*(__thiscall*)(hkxAttributeHolder*, hkxAttributeHolder const&);
			static REL::Relocation<func_t> func{ Offsets::hkxAttributeHolder::ctor };
			return func(this, other);
		}

	public:
		// members
		hkArray<hkxAttributeGroup, hkContainerHeapAllocator> m_attributeGroups;  // 08?
	};
}
