#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataClassDict_Enum_Item.h"
#include "RE/I/InternedString.h"

namespace RE
{
	class hkDataClassDict_Enum
	{
	public:
		using Item = hkDataClassDict_Enum_Item;

		// members
		InternedString                                               m_name;   // 00?
		hkArray<hkDataClassDict_Enum_Item, hkContainerHeapAllocator> m_items;  // 04?
	};
}
