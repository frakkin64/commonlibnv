#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/T/T.h"

namespace RE
{
	class Value;

	template <class T, class U>
	class hkSerializeMultiMap
	{
	public:
		class Value
		{
		public:
			// members
			U value;
			std::int32_t next;
		};

		// members
		hkArray<Value, hkContainerHeapAllocator> m_valueChain;
		hkPointerMap<T, std::int32_t, hkContainerHeapAllocator> m_indexMap;
		std::int32_t m_freeChainStart;
	};
}
