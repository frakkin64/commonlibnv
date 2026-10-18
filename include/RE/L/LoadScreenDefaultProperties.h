#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FONTS.h"

namespace RE
{
	class LoadScreenDefaultProperties
	{
	public:
		// members
		std::int32_t nOriginX;        // 00?
		std::int32_t nOriginY;        // 04?
		std::int32_t nHeight;         // 08
		std::int32_t nWidth;          // 0C?
		FONTS        eFontType;       // 10?
		std::uint8_t eJustification;  // 14?
		std::uint8_t pad15[0x3];      // 15
	};
}
