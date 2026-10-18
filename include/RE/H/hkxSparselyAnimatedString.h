#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxSparselyAnimatedString :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxSparselyAnimatedString };
		static constexpr auto VTABLE{ VTABLE::hkxSparselyAnimatedString };

		// override (hkReferencedObject)
		virtual ~hkxSparselyAnimatedString() = default;  // 00

		// members
		hkArray<hkStringPtr, hkContainerHeapAllocator> m_strings;  // 08?
		hkArray<float, hkContainerHeapAllocator>       m_times;    // 14?
	};
}
