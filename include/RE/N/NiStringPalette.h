#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiStringPalette :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiStringPalette };
		static constexpr auto VTABLE{ VTABLE::NiStringPalette };

		// members
		char*         m_pcBuffer;         // 08
		std::uint32_t m_uiAllocatedSize;  // 0C
		std::uint32_t m_uiEndOfBuffer;    // 10
	};
}
