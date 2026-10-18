#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/U/UVMap.h"

namespace RE
{
	class FontLetter
	{
	public:
		// members
		std::int32_t iTextureIndex;  // 00
		UVMap        pMapping[4];    // 04
		float        fWidth;         // 24
		float        fHeight;        // 28
		float        fLeadingEdge;   // 2C
		float        fSpacing;       // 30
		float        fTopEdge;       // 34
	};
}
