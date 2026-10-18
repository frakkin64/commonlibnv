#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpCollisionFilter.h"

namespace RE
{
	class alignas(16) hkpGroupFilter :
		public hkpCollisionFilter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpGroupFilter };
		static constexpr auto VTABLE{ VTABLE::hkpGroupFilter };

		// members
		std::int32_t  m_nextFreeSystemGroup;       // 30?
		std::uint32_t m_collisionLookupTable[32];  // 34?
		std::uint8_t  padB4[0xC];                  // B4
		hkVector4     m_pad256[4];                 // C0?
	};
}
