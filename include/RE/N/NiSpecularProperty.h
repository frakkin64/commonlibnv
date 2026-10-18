#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProperty.h"

namespace RE
{
	class NiSpecularProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSpecularProperty };
		static constexpr auto VTABLE{ VTABLE::NiSpecularProperty };

		// members
		std::uint16_t m_uFlags;  // 18
		std::uint16_t pad1A;     // 1A
	};
}
