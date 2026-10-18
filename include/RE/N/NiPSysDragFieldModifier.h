#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysFieldModifier.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiPSysDragFieldModifier :
		public NiPSysFieldModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysDragFieldModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysDragFieldModifier };

		// members
		bool         m_bUseDirection;  // 30
		std::uint8_t pad31[0x3];       // 31
		NiPoint3     m_kDirection;     // 34?
	};
}
