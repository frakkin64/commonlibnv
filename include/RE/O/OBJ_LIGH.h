#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class OBJ_LIGH
	{
	public:
		// members
		std::int32_t  time;              // 00
		std::uint32_t radius;            // 04
		std::uint32_t color;             // 08
		std::uint32_t flags;             // 0C
		float         fFallOffExponent;  // 10
		float         fFOV;              // 14
	};
	static_assert(sizeof(OBJ_LIGH) == 0x18);
}
