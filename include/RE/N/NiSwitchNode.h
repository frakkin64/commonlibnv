#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiSwitchNode :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSwitchNode };
		static constexpr auto VTABLE{ VTABLE::NiSwitchNode };

		// members
		std::uint16_t                    m_uFlags;       // AC
		std::uint16_t                    padAE;          // AE
		std::int32_t                     m_iIndex;       // B0
		float                            m_fSavedTime;   // B4
		std::uint32_t                    m_uiRevID;      // B8
		NiTPrimitiveArray<std::uint32_t> m_kChildRevID;  // BC
	};
}
