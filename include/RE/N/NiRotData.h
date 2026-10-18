#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey_KeyType.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class NiRotKey;

	class NiRotData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRotData };
		static constexpr auto VTABLE{ VTABLE::NiRotData };

		// members
		std::uint32_t          m_uiNumKeys;  // 08
		NiRotKey*              m_pkKeys;     // 0C
		NiAnimationKey_KeyType m_eType;      // 10
		std::uint8_t           m_ucKeySize;  // 14
		std::uint8_t           pad15[0x3];   // 15
	};
}
