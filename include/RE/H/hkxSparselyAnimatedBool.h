#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxSparselyAnimatedBool :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxSparselyAnimatedBool };
		static constexpr auto VTABLE{ VTABLE::hkxSparselyAnimatedBool };

		// override (hkReferencedObject)
		virtual ~hkxSparselyAnimatedBool() = default;  // 00

		// members
		hkArray<hkBool, hkContainerHeapAllocator> m_bools;  // 08?
		hkArray<float, hkContainerHeapAllocator>  m_times;  // 14?
	};
}
