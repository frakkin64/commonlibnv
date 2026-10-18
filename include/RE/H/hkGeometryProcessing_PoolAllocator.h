#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"

namespace RE
{
	class Item;
	class Pool;

	template <class T, std::size_t N, class U>
	class hkGeometryProcessing_PoolAllocator
	{
	public:
		class Item
		{
		public:
			// members
			std::uint8_t m_data[72];
		};

		class Pool
		{
		public:
			// members
			Item m_items[N];
			Item* m_free;
			std::int32_t m_used;
		};

		// members
		hkArray<Pool*, U> m_pools;
	};
}
