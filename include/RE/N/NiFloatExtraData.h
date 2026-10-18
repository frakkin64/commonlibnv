#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiFloatExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatExtraData };
		static constexpr auto VTABLE{ VTABLE::NiFloatExtraData };

		// members
		float m_fValue;  // 0C
	};
}
