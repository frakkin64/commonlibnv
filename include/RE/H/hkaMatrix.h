#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class hkaMatrix
	{
	public:
		// members
		hkArray<T, hkContainerHeapAllocator> m_data;
		std::int32_t m_m;
		std::int32_t m_n;
	};
}
