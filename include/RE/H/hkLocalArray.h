#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class hkLocalArray :
		public hkArray<T, hkContainerHeapAllocator>  // 00
	{
	public:
		// members
		T* m_localMemory;
	};
}
