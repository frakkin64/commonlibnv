#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey_KeyType.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class NiBoolKey;

	class NiBoolData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBoolData };
		static constexpr auto VTABLE{ VTABLE::NiBoolData };

		// members
		std::uint32_t          m_uiNumKeys;  // 08
		NiBoolKey*             m_pkKeys;     // 0C
		NiAnimationKey_KeyType m_eType;      // 10
		std::uint8_t           m_ucKeySize;  // 14
		std::uint8_t           pad15[0x3];   // 15
	};
}
