#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkxAttributeHolder.h"

namespace RE
{
	class hkxNode;

	class hkxNodeSelectionSet :
		public hkxAttributeHolder  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxNodeSelectionSet };
		static constexpr auto VTABLE{ VTABLE::hkxNodeSelectionSet };

		// override (hkxAttributeHolder)
		virtual ~hkxNodeSelectionSet() = default;  // 00

		// members
		hkArray<hkRefPtr<hkxNode>, hkContainerHeapAllocator> m_selectedNodes;  // 14?
		hkStringPtr                                          m_name;           // 20?
	};
}
