#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProperty.h"

namespace RE
{
	class NiCullingProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiCullingProperty };
		static constexpr auto VTABLE{ VTABLE::NiCullingProperty };

		// members
		std::uint16_t m_uFlags;  // 18
		std::uint16_t pad1A;     // 1A
	};
}
