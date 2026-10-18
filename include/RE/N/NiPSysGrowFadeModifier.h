#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class NiPSysGrowFadeModifier :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysGrowFadeModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysGrowFadeModifier };

		// members
		float         m_fGrowTime;         // 18
		std::uint16_t m_usGrowGeneration;  // 1C
		std::uint16_t pad1E;               // 1E
		float         m_fFadeTime;         // 20
		std::uint16_t m_usFadeGeneration;  // 24
		std::uint16_t pad26;               // 26
		float         m_fBaseScale;        // 28
	};
}
