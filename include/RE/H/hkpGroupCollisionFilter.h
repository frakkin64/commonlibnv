#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpCollisionFilter.h"

namespace RE
{
	class hkpGroupCollisionFilter :
		public hkpCollisionFilter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpGroupCollisionFilter };
		static constexpr auto VTABLE{ VTABLE::hkpGroupCollisionFilter };

		// override (hkpCollisionFilter)
		virtual ~hkpGroupCollisionFilter() = default;  // 00

		// members
		hkBool        m_noGroupCollisionEnabled;  // 30?
		std::uint8_t  pad31[0x3];                 // 31
		std::uint32_t m_collisionGroups[32];      // 34?
	};
}
