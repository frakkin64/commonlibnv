#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRect.h"

namespace RE
{
	class ButtonIcon
	{
	public:
		// members
		float         fWidth;    // 00?
		float         fXOffset;  // 04?
		float         fZOffset;  // 08?
		float         fSpacing;  // 0C?
		NiRect<float> UVCoords;  // 10?
	};
}
