#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkDataArrayImpl.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, std::size_t N>
	class BasicArrayImplementation :
		public hkDataArrayImpl  // 00
	{
	public:
		// members
		hkArray<T, hkContainerHeapAllocator> m_data;
	};
}
