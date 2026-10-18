#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFixedArray.h"

namespace RE
{
	class hkUnionFind
	{
	public:
		std::int32_t moveBiggestGroupToIndexZero(hkArray<std::int32_t, hkContainerHeapAllocator>& elementsPerGroup)
		{
			using func_t = decltype(&hkUnionFind::moveBiggestGroupToIndexZero);
			static REL::Relocation<func_t> func{ Offsets::hkUnionFind::moveBiggestGroupToIndexZero };
			return func(this, elementsPerGroup);
		}

		void reindex(hkFixedArray<std::int32_t> const& rindex, std::int32_t numNewGroups, hkArray<std::int32_t, hkContainerHeapAllocator>& elementsPerGroup)
		{
			using func_t = decltype(&hkUnionFind::reindex);
			static REL::Relocation<func_t> func{ Offsets::hkUnionFind::reindex };
			func(this, rindex, numNewGroups, elementsPerGroup);
		}

		void sortByGroupId(hkArray<std::int32_t, hkContainerHeapAllocator> const& elementsPerGroup, hkArray<std::int32_t, hkContainerHeapAllocator>& orderedGroups) const
		{
			using func_t = decltype(&hkUnionFind::sortByGroupId);
			static REL::Relocation<func_t> func{ Offsets::hkUnionFind::sortByGroupId };
			func(this, elementsPerGroup, orderedGroups);
		}

	public:
		// members
		hkFixedArray<std::int32_t>* m_parents;   // 00?
		std::int32_t                m_numNodes;  // 04?
	};
}
