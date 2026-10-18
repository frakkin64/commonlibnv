#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class NiBound;

	class NiPSysBoundUpdateModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysBoundUpdateModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysBoundUpdateModifier };

		// members
		std::int16_t  m_sUpdateSkip;    // 18
		std::uint16_t m_usUpdateCount;  // 1A
		NiBound*      m_pkSkipBounds;   // 1C
	};
}
