#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCollisionFilter.h"
#include "RE/H/hkpConstraintListener.h"

namespace RE
{
	class hkpConstrainedSystemFilter :
		public hkpCollisionFilter,  // 00
		public hkpConstraintListener  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstrainedSystemFilter };
		static constexpr auto VTABLE{ VTABLE::hkpConstrainedSystemFilter };

		// override (hkpCollisionFilter)
		virtual ~hkpConstrainedSystemFilter() = default;  // 00

		// members
		const hkpCollisionFilter* m_otherFilter;  // 34?
	};
}
