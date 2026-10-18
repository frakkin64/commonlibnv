#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TEXTURE_HAVOK_DATA
	{
	public:
		// members
		std::uint8_t cMaterialType;  // 00
		std::uint8_t cFriction;      // 01
		std::uint8_t cRestitution;   // 02
	};
	static_assert(sizeof(TEXTURE_HAVOK_DATA) == 0x3);
}
