#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class HeapArray
	{
	public:
		// members
		hkArray<T, hkContainerHeapAllocator> m_elems;
	};
}
