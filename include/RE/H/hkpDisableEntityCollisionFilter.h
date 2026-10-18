#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpCollisionFilter.h"
#include "RE/H/hkpEntityListener.h"

namespace RE
{
	class hkpEntity;

	class hkpDisableEntityCollisionFilter :
		public hkpCollisionFilter,  // 00
		public hkpEntityListener  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDisableEntityCollisionFilter };
		static constexpr auto VTABLE{ VTABLE::hkpDisableEntityCollisionFilter };

		// override (hkpCollisionFilter)
		virtual ~hkpDisableEntityCollisionFilter() = default;  // 00

		hkBool addEntityToFilter(hkpEntity* result)
		{
			using func_t = decltype(&hkpDisableEntityCollisionFilter::addEntityToFilter);
			static REL::Relocation<func_t> func{ Offsets::hkpDisableEntityCollisionFilter::addEntityToFilter };
			return func(this, result);
		}

	public:
		// members
		hkArray<hkpEntity*, hkContainerHeapAllocator> m_disabledEntities;  // 34?
	};
}
