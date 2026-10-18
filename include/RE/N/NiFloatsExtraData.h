#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"

namespace RE
{
	class NiFloatsExtraData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFloatsExtraData };
		static constexpr auto VTABLE{ VTABLE::NiFloatsExtraData };

		// members
		std::uint32_t m_uiSize;   // 0C
		float*        m_pfValue;  // 10
	};
}
