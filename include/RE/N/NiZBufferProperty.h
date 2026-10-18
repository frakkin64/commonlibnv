#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProperty.h"

namespace RE
{
	class NiZBufferProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiZBufferProperty };
		static constexpr auto VTABLE{ VTABLE::NiZBufferProperty };

		enum class TestFunction : std::int32_t
		{
			kTEST_ALWAYS = 0x0,
			kTEST_LESS = 0x1,
			kTEST_EQUAL = 0x2,
			kTEST_LESSEQUAL = 0x3,
			kTEST_GREATER = 0x4,
			kTEST_NOTEQUAL = 0x5,
			kTEST_GREATEREQUAL = 0x6,
			kTEST_NEVER = 0x7,
			kTEST_MAX_MODES = 0x8,
		};

		// members
		std::uint16_t m_uFlags;  // 18
		std::uint16_t pad1A;     // 1A
	};
}
