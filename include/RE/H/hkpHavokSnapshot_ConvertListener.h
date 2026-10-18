#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPackfileWriter_AddObjectListener.h"

namespace RE
{
	class hkClass;
	class hkReferencedObject;

	class hkpHavokSnapshot_ConvertListener :
		public hkPackfileWriter_AddObjectListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpHavokSnapshot_ConvertListener };
		static constexpr auto VTABLE{ VTABLE::hkpHavokSnapshot_ConvertListener };

		// override (hkPackfileWriter_AddObjectListener)
		virtual ~hkpHavokSnapshot_ConvertListener() = default;  // 00

		// add
		virtual void addObjectCallback(void const*& p, hkClass const*& k);  // 03

		// members
		hkArray<hkReferencedObject*, hkContainerHeapAllocator> m_objects;  // 08?
	};
}
