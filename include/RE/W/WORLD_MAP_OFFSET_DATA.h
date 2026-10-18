#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class WORLD_MAP_OFFSET_DATA
	{
	public:
		// members
		float fMapScale;    // 00
		float fMapOffsetX;  // 04
		float fMapOffsetY;  // 08
	};
	static_assert(sizeof(WORLD_MAP_OFFSET_DATA) == 0xC);
}
