#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FONTS.h"

namespace RE
{
	class DisplayData
	{
	public:
		// members
		std::uint32_t uDisplayPositionX;     // 00
		std::uint32_t uDisplayPositionY;     // 04
		std::uint32_t uDisplayWidth;         // 08
		std::uint32_t uDisplayHeight;        // 0C
		float         fDisplayRotationRads;  // 10
		FONTS         eDisplayFont;          // 14
		float         TextColorR;            // 18
		float         TextColorG;            // 1C
		float         TextColorB;            // 20
		std::uint32_t uJustification;        // 24
	};
}
