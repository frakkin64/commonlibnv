#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiColorExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiColorExtraData };
		static constexpr auto VTABLE{ VTABLE::NiColorExtraData };

		// members
		NiColorA m_kColorA;  // 0C
	};
}
