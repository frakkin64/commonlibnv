#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysFieldModifier.h"

namespace RE
{
	class NiPSysRadialFieldModifier :
		public NiPSysFieldModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysRadialFieldModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysRadialFieldModifier };

		// members
		float m_fRadialType;  // 30
	};
}
