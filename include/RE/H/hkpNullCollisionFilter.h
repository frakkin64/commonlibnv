#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCollisionFilter.h"

namespace RE
{
	class hkpNullCollisionFilter :
		public hkpCollisionFilter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpNullCollisionFilter };
		static constexpr auto VTABLE{ VTABLE::hkpNullCollisionFilter };

		// override (hkpCollisionFilter)
		virtual ~hkpNullCollisionFilter() = default;  // 00
	};
}
