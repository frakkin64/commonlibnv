#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiBooleanExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBooleanExtraData };
		static constexpr auto VTABLE{ VTABLE::NiBooleanExtraData };

		// members
		bool         m_bValue;    // 0C
		std::uint8_t pad0D[0x3];  // 0D
	};
}
