#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxEnum :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxEnum };
		static constexpr auto VTABLE{ VTABLE::hkxEnum };

		class Item;

		class Item
		{
		public:
			// members
			std::int32_t m_value;  // 00?
			hkStringPtr  m_name;   // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkxEnum() = default;  // 00

		// members
		hkArray<hkxEnum::Item, hkContainerHeapAllocator> m_items;  // 08?
	};
}
