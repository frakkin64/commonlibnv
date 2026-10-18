#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class Interface_enumGamepadButtons : std::int32_t
	{
		kEButtonNone = 0x0,
		kEButtonDPadUp = 0x1,
		kEButtonDPadDown = 0x2,
		kEButtonDPadRight = 0x3,
		kEButtonDPadLeft = 0x4,
		kEButtonStart = 0x5,
		kEButtonBack = 0x6,
		kEButtonA = 0x9,
		kEButtonB = 0xA,
		kEButtonX = 0xB,
		kEButtonY = 0xC,
		kEButtonLT = 0xD,
		kEButtonRT = 0xE,
		kEButtonLB = 0xF,
		kEButtonRB = 0x10,
		kEButtonLThumb = 0x11,
		kEButtonRThumb = 0x12,
		kEButtonL = 0x14,
		kEButtonR = 0x15,
		kEButtonDownEvent = 0x2,
		kEButtonUpEvent = 0x1,
		kEButtonStillDownEvent = 0x0,
		kEButtonIdleEvent = -1,
		kEButtonClick = -2,
	};
}
