#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxSparselyAnimatedInt :
		public hkReferencedObject  // 00
	{
	public:
		// override (hkReferencedObject)
		virtual ~hkxSparselyAnimatedInt() = default;  // 00

		// members
		hkArray<std::int32_t, hkContainerHeapAllocator> m_ints;   // 08
		hkArray<float, hkContainerHeapAllocator>        m_times;  // 14
	};
	static_assert(sizeof(hkxSparselyAnimatedInt) == 0x20);
}
