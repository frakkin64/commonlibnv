#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiTextKey;

	class NiTextKeyExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTextKeyExtraData };
		static constexpr auto VTABLE{ VTABLE::NiTextKeyExtraData };

		// members
		std::uint32_t m_uiNumKeys;  // 0C
		NiTextKey*    m_pKeys;      // 10
	};
}
