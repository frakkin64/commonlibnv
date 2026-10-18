#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class OBJ_ARMO
	{
	public:
		// members
		std::uint16_t sRating;           // 00
		std::uint16_t pad02;             // 02
		float         fDamageThreshold;  // 04
		std::uint8_t  cFlags;            // 08
		std::uint8_t  cConditionLevel;   // 09
		std::uint16_t pad0A;             // 0A
	};
	static_assert(sizeof(OBJ_ARMO) == 0xC);
}
