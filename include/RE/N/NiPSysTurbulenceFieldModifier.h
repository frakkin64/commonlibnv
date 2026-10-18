#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysFieldModifier.h"

namespace RE
{
	class NiPSysTurbulenceFieldModifier :
		public NiPSysFieldModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysTurbulenceFieldModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysTurbulenceFieldModifier };

		// members
		float m_fFrequency;            // 30
		float m_fFrequencyUpdateTime;  // 34
		float m_fLastUpdateTime;       // 38
	};
}
