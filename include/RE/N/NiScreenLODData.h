#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBound.h"
#include "RE/N/NiLODData.h"

namespace RE
{
	class NiScreenLODData :
		public NiLODData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiScreenLODData };
		static constexpr auto VTABLE{ VTABLE::NiScreenLODData };

		// members
		NiBound       m_kBound;            // 08
		NiBound       m_kWorldBound;       // 18
		std::uint32_t m_uiNumProportions;  // 28
		float*        m_pfProportions;     // 2C
	};
}
