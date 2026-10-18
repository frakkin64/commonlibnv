#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkMap.h"
#include "RE/H/hkMapOperations.h"
#include "RE/H/hkpCollisionFilter.h"

namespace RE
{
	class hkpPairCollisionFilter :
		public hkpCollisionFilter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPairCollisionFilter };
		static constexpr auto VTABLE{ VTABLE::hkpPairCollisionFilter };

		hkpPairCollisionFilter* ctor(hkpCollisionFilter const* childFilter)
		{
			using func_t = hkpPairCollisionFilter*(__thiscall*)(hkpPairCollisionFilter*, hkpCollisionFilter const*);
			static REL::Relocation<func_t> func{ Offsets::hkpPairCollisionFilter::ctor };
			return func(this, childFilter);
		}

	public:
		// members
		hkMap<std::uint64_t, std::uint64_t, hkMapOperations<std::uint64_t>, hkContainerHeapAllocator> m_disabledPairs;  // 30
		const hkpCollisionFilter*                                                                     m_childFilter;    // 3C
	};
}
