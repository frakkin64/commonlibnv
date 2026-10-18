#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BIPED_MODEL
	{
	public:
		// members
		std::uint32_t iBipedObjectSlots;  // 00
		std::uint8_t  sFlags;             // 04
		std::uint8_t  pad05[0x3];         // 05
	};
	static_assert(sizeof(BIPED_MODEL) == 0x8);
}
