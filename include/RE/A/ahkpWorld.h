#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpWorld.h"

namespace RE
{
	class alignas(16) ahkpWorld :
		public hkpWorld  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ahkpWorld };
		static constexpr auto VTABLE{ VTABLE::ahkpWorld };

		// members
		void*        m_userData;   // 350?
		std::uint8_t pad354[0xC];  // 354
	};
}
