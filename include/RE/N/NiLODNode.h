#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiSwitchNode.h"

namespace RE
{
	class NiLODNode :
		public NiSwitchNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLODNode };
		static constexpr auto VTABLE{ VTABLE::NiLODNode };

		// members
		// not placed: m_spLODData, m_bLODActive
	};
}
