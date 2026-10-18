#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProperty.h"

namespace RE
{
	class NiDitherProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDitherProperty };
		static constexpr auto VTABLE{ VTABLE::NiDitherProperty };

		// members
		std::uint16_t m_uFlags;  // 18
		std::uint16_t pad1A;     // 1A
	};
}
