#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"
#include "RE/N/NiFixedString.h"

namespace RE
{
	class NiStringExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiStringExtraData };
		static constexpr auto VTABLE{ VTABLE::NiStringExtraData };

		// members
		NiFixedString m_kString;  // 0C
	};
}
