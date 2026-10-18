#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBoundingVolume.h"
#include "RE/N/NiBox.h"

namespace RE
{
	class NiBoxBV :
		public NiBoundingVolume  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBoxBV };
		static constexpr auto VTABLE{ VTABLE::NiBoxBV };

		// members
		NiBox m_kBox;  // 04
	};
}
